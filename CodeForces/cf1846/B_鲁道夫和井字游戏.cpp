#include<bits/stdc++.h>

using namespace std;
int t;
void Solve(){
  string s[4];
  for (int i = 1; i <= 3; i++){
    cin >> s[i];
    s[i] = ' ' + s[i];
  }
  for (int i = 1; i <= 3; i++){
    for (int j = 1; j <= 3; j++){
      if (s[i][j] != '.'){
        if (i == 1){
          if (s[i][j] == s[i + 1][j] && s[i + 1][j] == s[i + 2][j]){
            cout << s[i][j] << '\n';
            return ;
          }
        }
        if (j == 1){
          if (s[i][j] == s[i][j + 1] && s[i][j] == s[i][j + 2]){
            cout << s[i][j] << '\n';
            return ;
          }
        }
        if (i == 1 && j == 1){
          if (s[i][j] == s[i + 1][j + 1] && s[i][j] == s[i + 2][j + 2]){
            cout << s[i][j] << '\n';
            return ;
          }
        }
        if (i == 1 && j == 3){
          if (s[i][j] == s[i + 1][j - 1] && s[i][j] == s[i + 2][j - 2]){
            cout << s[i][j] << '\n';
            return ;
          }
        }
      }
    }
  }
  //if (s[1][1] == s[2][2] && s[2][2] == s[3][3] && s[1][1] != '.'){
  //  cout << s[1][1] << '\n';
  //  return ;
  //}
  cout << "DRAW\n";
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}