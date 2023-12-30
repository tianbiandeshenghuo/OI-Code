#include<bits/stdc++.h>

using namespace std;
const int MAXN = 55 + 5;
int n, m, a[MAXN][MAXN], cnt = 0;
string s;
bool vis[MAXN];
void dfs(int x){
  if (vis[x]){
    return ;
  }
  cnt++;
  vis[x] = 1;
  for (int i = 1; i <= n; i++){
    if (a[x][i]){
      dfs(i);
    }
  }
}
int main(){
  cin >> n >> m;
  while (m--){
    int x, y;
    cin >> x >> y;
    a[x][y] = 1;
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      vis[j] = 0;
    }
    cnt = 0;
    dfs(i);
    if (cnt == n){
      cout << i << '\n';
      return 0;
    }
  }
  cout << -1;
  return 0;
}