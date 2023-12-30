#include<bits/stdc++.h>

using namespace std;
const int MAXN = 15;
int n, m;
long long ans = 0;
struct Node{
  int x, v;
};
vector<Node> a[MAXN];
bool vis[MAXN];
void dfs(int x, long long cnt){
  if (vis[x]){
    return ;
  }
  ans = max(ans, cnt);
  vis[x] = 1;
  for (auto v : a[x]){
    dfs(v.x, cnt + v.v);
  }
  vis[x] = 0;
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  while (m--){
    int u, v, w;
    cin >> u >> v >> w;
    a[u].push_back({v, w});
    a[v].push_back({u, w});
  }
  for (int i = 1; i <= n; i++){
    dfs(i, 0);
  }
  cout << ans;
  return 0;
}