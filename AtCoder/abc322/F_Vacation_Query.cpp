#include<bits/stdc++.h>

using namespace std;
const int MAXN = 7e6 + 5;
int a[MAXN];
struct node {
  int tot, sum, lsum, rsum;
  bool reset, modify, rev;
}t[MAXN], mirror[MAXN];
struct val {
  int sum, lsum, rsum;
};
void maintain(int k, int l, int r, int mid) {
  int ls = k << 1, rs = k << 1 | 1;
  t[k].tot = t[ls].tot + t[rs].tot;
  t[k].lsum = t[ls].lsum, t[k].rsum = t[rs].rsum;
  if (t[ls].sum == mid - l + 1){
    t[k].lsum += t[rs].lsum;
  }
  if (t[rs].sum == r - mid){
    t[k].rsum += t[ls].rsum;
  }
  t[k].sum = max(max(t[ls].sum, t[rs].sum), t[ls].rsum + t[rs].lsum);
  mirror[k].tot = mirror[ls].tot + mirror[rs].tot;
  mirror[k].lsum = mirror[ls].lsum, mirror[k].rsum = mirror[rs].rsum;
  if (mirror[ls].sum == mid - l + 1){
    mirror[k].lsum += mirror[rs].lsum;
  }
  if (mirror[rs].sum == r - mid){
    mirror[k].rsum += mirror[ls].rsum;
  }
  mirror[k].sum = max(max(mirror[ls].sum, mirror[rs].sum), mirror[ls].rsum + mirror[rs].lsum);
}
void build(int k, int l, int r) {
  if (l == r) {
    t[k].sum = t[k].lsum = t[k].rsum = t[k].tot = a[l];
    mirror[k].sum = mirror[k].lsum = mirror[k].rsum = mirror[k].tot = a[l] ^ 1;
    return;
  }
  int mid = l + r >> 1;
  build(k << 1, l, mid), build(k << 1 | 1, mid + 1, r);
  maintain(k, l, r, mid);
}
void modify(int x, int l, int r) {
  t[x].tot = t[x].sum = t[x].lsum = t[x].rsum = r - l + 1;
  t[x].modify = 1;
  t[x].reset = t[x].rev = 0;
  mirror[x].tot = mirror[x].sum = mirror[x].lsum = mirror[x].rsum = mirror[x].reset = mirror[x].rev = 0;
  mirror[x].modify = 1;
}
void zero(int x, int l, int r) {
  t[x].tot = t[x].sum = t[x].lsum = t[x].rsum = t[x].modify = t[x].rev = 0;
  t[x].reset = 1;
  mirror[x].tot = mirror[x].sum = mirror[x].lsum = mirror[x].rsum = r - l + 1;
  mirror[x].rev = mirror[x].modify = 0;
  mirror[x].reset = 1;
}
void filp(int x, int l, int r) {
  mirror[x].rev ^= 1, t[x].rev ^= 1;
  swap(mirror[x], t[x]);
}
void pushdown(int k, int l, int r) {
  int mid = l + r >> 1;
  if (t[k].modify) {
    modify(k << 1, l, mid);
    modify(k << 1 | 1, mid + 1, r);
    t[k].modify = mirror[k].modify = 0;
  }else if (t[k].reset) {
    zero(k << 1, l, mid);
    zero(k << 1 | 1, mid + 1, r);
    t[k].reset = mirror[k].reset = 0;
  }
  if (t[k].rev) {
    filp(k << 1, l, mid);
    filp(k << 1 | 1, mid + 1, r);
    t[k].rev = mirror[k].rev = 0;
  }
}
void reverse(int k, int l, int r, int ql, int qr) {
  if (ql <= l && r <= qr) {
    filp(k, l, r);
    return;
  }
  pushdown(k, l, r);
  int mid = l + r >> 1;
  if (ql <= mid){
    reverse(k << 1, l, mid, ql, qr);
  }
  if (qr > mid){
    reverse(k << 1 | 1, mid + 1, r, ql, qr);
  }
  maintain(k, l, r, mid);
}
val qsum(int k, int l, int r, int ql, int qr) {
  if (ql <= l && r <= qr){
    return val{t[k].sum, t[k].lsum, t[k].rsum};
  }
  pushdown(k, l, r);
  int mid = l + r >> 1, fl = 0, fr = 0;
  val ans = val{0, 0, 0}, ls = val{0, 0, 0}, rs = val{0, 0, 0};
  if (ql <= mid){
    ls = qsum(k << 1, l, mid, ql, qr);
    fl = 1;
  }
  if (qr > mid){
    rs = qsum(k << 1 | 1, mid + 1, r, ql, qr);
    fr = 1;
  }
  if (!fl){
    return rs;
  }
  if (!fr){
    return ls;
  }
  ans.sum = max(ls.sum, rs.sum);
  ans.lsum = ls.lsum, ans.rsum = rs.rsum;
  if (ls.sum == mid - max(l, ql) + 1) {
    ans.lsum += rs.lsum;
  }
  if (rs.sum == min(r, qr) - mid) {
    ans.rsum += ls.rsum;
  }
  ans.sum = max(ans.sum, ls.rsum + rs.lsum);
  return ans;
}
signed main() {
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    char s;
    cin >> s;
    a[i] = s - '0';
  }
  build(1, 1, n);
  while (m--) {
    int op, x, y;
    cin >> op >> x >> y;
    if (op == 1) {
      reverse(1, 1, n, x, y);
    }else {
      cout << qsum(1, 1, n, x, y).sum << '\n';
    }
  }
}
