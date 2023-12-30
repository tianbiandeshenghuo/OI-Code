#include<bits/stdc++.h>

using namespace std;
int n;
string r, c;
char s[10][10];
bool a[10], b[10];
bool check(){
  for (int i = 1; i <= n; i++){
    bool x = 1, y = 1;
    for (int j = 1; j <= n; j++){
      if (s[i][j] != '.' && s[i][j] != c[i] && x){
        return 0;
      }else if (s[i][j] == c[i]){
        x = 0;
      }
      if (s[j][i] != '.' && s[j][i] != r[j] && y){
        return 0;
      }else if (s[j][i] == r[j]){
        y = 0;
      }
    }
    if (x || y){
      return 0;
    }
  }
  return 1;
}
void dfs(int x, int y){
  if (y == n + 1){
    dfs(x + 1, 1);
    return ;
  }
  if (x == n + 1){
    if (check()){
      cout << "Yes\n";
      for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
          cout << s[i][j];
        }
        cout << '\n';
      }
      exit(0);
    }
    return ;
  }
  s[x][y] = '.';
  bool a[3] = {0}, b[3] = {0};
  for (int i = 1; i <= x; i++){
    if (s[i][y] == '.'){
      continue;
    }
    if (a[s[i][y] - 'A']){
      return ;
    }
    a[s[i][y] - 'A'] = 1;
  }
  for (int i = 1; i <= y; i++){
    if (s[x][i] == '.'){
      continue;
    }
    if (b[s[x][i] - 'A']){
      return ;
    }
    b[s[x][i] - 'A'] = 1;
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      cout << s[i][j];
    }
    cout << '\n';
  }
  dfs(x, y + 1);
  if (!a[x]){
    s[x][y] = r[x];
    a[x] = 1;
    dfs(x, y + 1);
    s[x][y] = '.';
    a[x] = 0;
    return ;
  }
  if (!b[y]){
    s[x][y] = c[y];
    b[y] = 1;
    dfs(x, y + 1);
    s[x][y] = '.';
    b[y] = 0;
    return ;
  }
  for (char i = 'A'; i <= 'C'; i++){
    s[x][y] = i;
    dfs(x, y + 1);
  }
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> r >> c;
  r = ' ' + r, c = ' ' + c;
  dfs(1, 1);
  cout << "No";
  return 0;
}