#include<bits/stdc++.h>

using namespace std;
int n, m;
string s[505];
void Solve(){
  cin >> n >> m;
  bool flag = 0;
  for (int i = 1; i <= n; i++){
    cin >> s[i];
    s[i] = ' ' + s[i];
    int cnt = 0;
    for (int j = 1; j <= m; j++){
      cnt += s[i][j] != '.';
    }
    if (cnt % 2){
      flag = 1;
    }
  }
  for (int i = 1; i <= m; i++){
    int cnt = 0;
    for (int j = 1; j <= n; j++){
      cnt += s[j][i] != '.';
    }
    if (cnt % 2){
      flag = 1;
    }
  }
  if (flag){
    cout << "-1\n";
    return ;
  }
  for (int i = 1; i <= n; i++){
    int cnt = 0;
    for (int j = 1; j <= m; j++){
      if (s[i][j] == 'U'){
        s[i + cnt % 2][j] = 'W';
        s[i + !(cnt % 2)][j] = 'B';
        cnt++;
      }
    }
  }
  for (int j = 1; j <= m; j++){
    int cnt = 0;
    for (int i = 1; i <= n; i++){
      if (s[i][j] == 'L'){
        s[i][j + cnt % 2] = 'W';
        s[i][j + !(cnt % 2)] = 'B';
        cnt++;
      }
    }
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
      cout << s[i][j];
    }
    cout << '\n';
  }
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}