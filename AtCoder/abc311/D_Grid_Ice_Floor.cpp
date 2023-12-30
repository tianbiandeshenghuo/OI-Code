#include<bits/stdc++.h>

using namespace std;
int n, m, t;
string s[205];
bool v[205][205];
int fx[2][4] = {{1, -1, 0, 0}, {0, 0, 1, -1}};
void dfs(int x, int y, int dx, int dy){
  if (x < 1 || y < 1 || x > n || y > m || t >= 1e6){
    return ;
  }
  t++;
  cerr << x << ' ' << y << ' ' << dx << ' ' << dy << ' ' << t << '\n';
  if (s[x][y] == '#'){
    for (int i = 0; i < 4; i++){
      int dx = x + fx[0][i], dy = y + fx[1][i];
      if (s[dx][dy] == '#'){
        continue;
      }
      dfs(dx, dy, fx[0][i], fx[1][i]);
    }
    return ;
  }
  v[x][y] = 1;
  dfs(x + dx, y + dy, dx, dy);
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    cin >> s[i];
    s[i] = ' ' + s[i];
  }
  for (int i = 0; i < 4; i++){
    dfs(2, 2, fx[0][i], fx[1][i]);
  }
  int ans = 0;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
      ans += v[i][j];
    }
  }
  cout << ans;
  return 0;
}