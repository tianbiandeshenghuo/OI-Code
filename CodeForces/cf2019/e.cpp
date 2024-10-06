#include<bits/stdc++.h>

using namespace std;
const int MAXN = 5e5 + 5;
int n, sd[MAXN], sz[MAXN], vis[MAXN], dis[MAXN];
vector<int> g[MAXN];
void dfs(int x, int fa){
  sd[x] = sd[fa] + 1;
  sz[x] = 1;
  for (auto v : g[x]){
    if (v != fa){
      dfs(v, x);
      sz[x] += sz[v];
    }
  }
  dis[sd[x]]++;
  vis[sd[x]] += (g[x].size() == 1);
}
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    vis[i] = dis[i] = 0;
  }
  for (int i = 1, u, v; i < n; i++){
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  dfs(1, 0);
  int ans = 1e9, cnt = 0, tmp = n;
  for (int i = 1; i <= n && tmp; i++){
    tmp -= dis[i];
    cnt += vis[i];
    ans = min(ans, tmp + cnt);
  }
  cout << ans << '\n';
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}