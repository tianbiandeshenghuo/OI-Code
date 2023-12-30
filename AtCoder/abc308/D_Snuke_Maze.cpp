#include<bits/stdc++.h>

using namespace std;
const string _d = "snuke";
int n, m;
int fx[2][4] = {{1, -1, 0, 0}, {0, 0, 1, -1}};
char s[505][505];
bool v[505][505];
void dfs(int x, int y, int now){
  //cout << x << ' ' << y << ' ' << now << '\n';
  if (x < 1 || y < 1 || x > n || y > m || v[x][y] || s[x][y] != _d[now]){
    return ;
  }
  
  if (x == n && y == m){
    cout << "Yes";
    exit(0);
  }
  v[x][y] = 1;
  for (int i = 0; i < 4; i++){
    int dx = x + fx[0][i], dy = y + fx[1][i];
    dfs(dx, dy, (now + 1) % 5);
  }
}
int main(){
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
      cin >> s[i][j];
    }
  }
  dfs(1, 1, 0);
  cout << "No";
  return 0;
}