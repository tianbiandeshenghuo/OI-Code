#include<bits/stdc++.h>

using namespace std;
long long ans;
int n, dis[20][20];
bool vis[20];
void dfs(int x, long long cnt){
  ans = max(ans, cnt);
  if (x == n){
    return ;
  }
  if (vis[x]){
    dfs(x + 1, cnt);
    return ;
  }
  vis[x] = 1;
  for (int i = x + 1; i <= n; i++){
    if (!vis[i]){
      vis[i] = 1;
      dfs(x + 1, cnt + dis[x][i]);
      vis[i] = 0;
    }
  }
  vis[x] = 0;
  dfs(x + 1, cnt);
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i < n; i++){
    for (int j = i + 1; j <= n; j++){
      cin >> dis[i][j];
      dis[j][i] = dis[i][j];
    }
  }
  dfs(1, 0);
  cout << ans;
  return 0;
}