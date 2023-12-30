#include<bits/stdc++.h>

using namespace std;
const int MAXN = 3e5 + 5;
int n, cnt, sz[MAXN], ans;
set<int> a[MAXN];
void dfs(int x, int fa){
  sz[x]++;
  for (auto v : a[x]){
    if (v != fa){
      dfs(v, x);
      sz[x] += sz[v];
      if (x == 1){
        cnt = max(cnt, sz[v]);
      }
    }
  }
  if (x == 1 && a[1].size() == 1){
    return ;
  }

  for (auto v : a[x]){
    if (v != fa && x == 1){
      ans += sz[v];
    }
  }
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1, u, v; i < n; i++){
    cin >> u >> v;
    a[u].insert(v);
    a[v].insert(u);
  }
  dfs(1, 0);
  cout << ans - (a[1].size() == 1 ? 0 : cnt) + 1;
  return 0;
}