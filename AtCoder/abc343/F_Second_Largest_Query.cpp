#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1e6 + 5;
int n, m, a[MAXN], ans[MAXN], sum, cnt[MAXN], kc;
struct Node{
  int x, y, z, id;
  bool operator<(const Node &i)const{
    return x / kc == i.x / kc ? (y / kc == i.y / kc ? z < i.z : y / kc < i.y / kc) : x / kc < i.x / kc;
  }
};
vector<Node> q, r;
void add(int x){
  sum += !cnt[x]++;
}
void del(int x){
  sum -= !--cnt[x];
}
void xg(int now, int L, int R, int tm){
  if (L <= r[now - 1].x && r[now - 1].x <= R){
    del(a[r[now - 1].x]);
    add(r[now - 1].y);
  }
  swap(a[r[now - 1].x], r[now - 1].y);
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  kc = pow(n, 0.66666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666);
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for (int i = 1, x, y; i <= m; i++){
    char s;
    cin >> s >> x >> y;
    if (s == '1'){
      q.push_back({x, y, (int)r.size(), (int)q.size()});
    }else {
      r.push_back({x, y});
    }
  }
  sort(q.begin(), q.end());
  int l = 1, r = 0, now = 0;
  for (auto [L, R, tm, qwq] : q){
    while (l < L){
      del(a[l++]);
    }
    while (l > L){
      add(a[--l]);
    }
    while (r < R){
      add(a[++r]);
    }
    while (r > R){
      del(a[r--]);
    }
    while (now > tm){
      xg(now--, L, R, tm);
    }
    while (now < tm){
      xg(++now, L, R, tm);
    }
    ans[qwq] = sum;
  }
  for (int i = 1; i <= q.size(); i++){
    cout << ans[i - 1] << '\n';
  }
  return 0;
}