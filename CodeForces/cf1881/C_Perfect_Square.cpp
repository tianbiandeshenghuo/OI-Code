#include<bits/stdc++.h>

using namespace std;
int n;
string s[1005];
int getnum(char a, char b){
  if (a < b){
    return b - a;
  }else {
    return 114514;
  }
}
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> s[i];
    s[i] = ' ' + s[i];
  }
  int ans = 0;
  for (int k = 1; k <= 10; k++){
    for (int i = 1; i <= n; i++){
      for (int j = 1; j <= n; j++){
        if (s[i][j] != s[n - j + 1][i]){
          if (getnum(s[i][j], s[n - j + 1][i]) < getnum(s[n - j + 1][i], s[i][j])){
            ans += getnum(s[i][j], s[n - j + 1][i]);
            s[i][j] = s[n - j + 1][i];
          }else {
            ans += getnum(s[n - j + 1][i], s[i][j]);
            s[n - j + 1][i] = s[i][j];
          }
        }
      }
    }
  }
  cout << ans << '\n';
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  //t = 1;
  while (t--){
    Solve();
  }
  return 0;
}
/*
abab
baba
abab
baba
*/

/*
1 1 -> 4 1
1 2 -> 3 1
1 3 -> 2 1
1 4 -> 1 1
*/