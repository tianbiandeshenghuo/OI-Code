#include <bits/stdc++.h>

using namespace std;

void Solve(){
  int n;
  cin >> n;
  for (int i = 'a'; i <= 'z'; i++){
    for (int j = 'a'; j <= 'z'; j++){
      for (int k = 'a'; k <= 'z'; k++){
        if (i + j + k - 'a' - 'a' - 'a' + 3 == n){
          cout << char(i) << char(j) << char(k) << '\n';
          return ;
        }
      }
    }
  }
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--){
    Solve();
  }  
  return 0;
}
/*
abcdefghijklmnqrstuvwxyz
*/