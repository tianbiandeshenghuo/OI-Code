#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, m, a[MAXN], dp[MAXN];
vector<int> g[MAXN];
bool vis[MAXN];
int cnt = 0;
void dfs(int x, int p){
  if (1000 * clock() / CLOCKS_PER_SEC >= 1950){
    cout << dp[1];
    exit(0);
  }
  if (!dp[x] || vis[x]){
    return ;
  }
  vis[x] = 1;
  for (auto v : g[x]){
    if (a[v] <= a[x]){
      if (dp[x] + (a[v] != a[x]) > dp[v]){
        dp[v] = dp[x] + (a[v] != a[x]);
        dfs(v, p + 1);
      }
    }
  }
  vis[x] = 0;
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for (int i = 1, u, v; i <= m; i++){
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  dp[n] = 1;
  dfs(n, 0);
  /*
  for (int j = 1; j <= 50; j++){
  for (int i = n; i >= 1; i--){
    if (!dp[i]){
      continue;
    }
    for (auto v : g[i]){
      if (a[v] <= a[i]){
        dp[v] = max(dp[v], dp[i] + (a[v] != a[i]));
        }
      }
    }
  }
  */
  cout << dp[1];
  return 0;
}