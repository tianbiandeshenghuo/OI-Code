#include<bits/stdc++.h>

using namespace std;
int n, t, m;
long long ans;
int dw[15], rd[15];
bool vis[15];
struct Node{
  int x, y;
} q[105];
bool check(){
  for (int i = 1; i <= t; i++){
    if (!dw[i]){
      return 0;
    }
  }
  for (int i = 1; i <= m; i++){
    if (dw[q[i].x] == dw[q[i].y]){
      return 0;
    }
  }
  for (int i = 1; i <= n; i++){
    if (!rd[i]){
      return 0;
    }
  }
  return 1;
}
void dfs(int x, int sum){
  cout << x << ' ' << sum << '\n';
  for (int i = 1; i <= n; i++){
    cout << dw[i] << " \n"[i == n];
  }
  if (x == t + 1){
    ans += check();
    return ;
  }
  int cnt = 0;
  vector<int> a;
  for (int i = 1; i <= n; i++){
    if (!vis[i]){
      vis[i] = 1;
      a.push_back(i);
      cnt++;
      dw[x] = i;
      rd[i] = x;
      dfs(x + 1, sum + cnt);
    }
  }
  dw[x] = 0;
  for (int v : a){
    vis[v] = dw[v] = 0;
  }
}
int main(){
  cin >> n >> t >> m;
  for (int i = 1; i <= m; i++){
    cin >> q[i].x >> q[i].y;
  }
  dfs(1, 0);
  cout << ans;
  return 0;
}
