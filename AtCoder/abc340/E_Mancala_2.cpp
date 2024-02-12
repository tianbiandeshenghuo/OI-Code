#include <bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5;
int n, m, a[MAXN];
struct Node{
  int x, lz;
} tr[16 * MAXN];
void pushdown(int id, int l, int r){
  if (id * 2 < 4 * MAXN){
    tr[id * 2].lz += tr[id].lz;
    tr[id * 2].x += tr[id].lz;
  }
  if (id * 2 + 1 < 4 * MAXN){
    tr[id * 2 + 1].lz += tr[id].lz;
    tr[id * 2 + 1].x += tr[id].lz;
  }
  tr[id].lz = 0;
}
void js(int id, int l, int r){
  if (l == r){
    tr[id].x = a[l];
    return ;
  }
  int mid = (l + r) >> 1;
  js(id * 2, l, mid);
  js(id * 2 + 1, mid + 1, r);
}
int find(int id, int l, int r, int p){
  if (l == r){
    pushdown(id, l, r);
    return tr[id].x;
  }
  int mid = (l + r) >> 1;
  pushdown(id, l, r);
  if (mid < p){
    return find(id * 2 + 1, mid + 1, r, p);
  }
  return find(id * 2, l, mid, p);
}
void xg(int id, int l, int r, int ql, int qr, int p){
  if (ql <= l && r <= qr){
    tr[id].lz += p;
    if (l == r){
      tr[id].x += p;
    }
    return ;
  }else if (l > qr || r < ql){
    return ;
  }
  int mid = (l + r) >> 1;
  xg(id * 2, l, mid, ql, qr, p);
  xg(id * 2 + 1, mid + 1, r, ql, qr, p);
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  js(1, 1, n);
  for (int i = 1, x; i <= m; i++){
    cin >> x;
    x++;
    int tmp = find(1, 1, n, x);
    xg(1, 1, n, x, x, -tmp);
    xg(1, 1, n, 1, n, tmp / n);
    tmp %= n;
    if (x + 1 > n){
      xg(1, 1, n, 1, tmp, 1);
    }else if (x + tmp > n){
      xg(1, 1, n, x + 1, n, 1);
      xg(1, 1, n, 1, x + tmp - n, 1);
    }else {
      xg(1, 1, n, x + 1, x + tmp, 1);
    }
  }
  for (int i = 1; i <= n; i++){
    cout << find(1, 1, n, i) << ' ';
  }
  return 0;
}