#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int t, n;
void Solve(){
  string s[8];
  for (int i = 0; i < 8; i++){
    cin >> s[i];
  }
  for (int i = 0; i < 8; i++){
    for (int j = 0; j < 8; j++){
      while (i < 8 && s[i][j] != '.'){
        cout << s[i][j];
        i++;
      }
    }
  }
  cout << '\n';
}
int main(){
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}