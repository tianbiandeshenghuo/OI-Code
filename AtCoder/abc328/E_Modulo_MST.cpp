#include<bits/stdc++.h>
#define int long long

using namespace std;
int n, m, k, ans = 1e18;
struct Node{
  int u, v, w;
};
vector<Node> g;
int G[10][10];
bool vis[10];
void dfs(int x){
  if (vis[x]){
    return ;
  }
  vis[x] = 1;
  for (int j = 1; j <= n; j++){
    if (G[j][x]){
      dfs(j);
    }
  }
}
bool check(){
  for (int i = 1; i <= n; i++){
    vis[i] = 0;
  }
  dfs(1);
  for (int i = 1; i <= n; i++){
    if (!vis[i]){
      return 0;
    }
  }
  return 1;
}
void dfs(int x, int cnt, int op){
  if (cnt == n - 1){
    if (check()){
      ans = min(ans, op);
    }
    return ;
  }
  if (x == m){
    return ;
  }
  dfs(x + 1, cnt, op);
  G[g[x].v][g[x].u] = G[g[x].u][g[x].v] = 1;
  dfs(x + 1, cnt + 1, (op + g[x].w) % k);
  G[g[x].v][g[x].u] = G[g[x].u][g[x].v] = 0;
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m >> k;
  g.resize(m);
  for (auto &v : g){
    cin >> v.u >> v.v >> v.w;
  }
  dfs(0, 0, 0);
  cout << ans;
  return 0;
}
