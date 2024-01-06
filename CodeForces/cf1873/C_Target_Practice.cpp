#include<bits/stdc++.h>

using namespace std;
int cnt[15][15];
void Solve(){
  long long ans = 0;
  for (int i = 1; i <= 10; i++){
    string s;
    cin >> s;
    for (int j = 0; j < 10; j++){
      if (s[j] == 'X'){
        ans += cnt[i][j + 1];
      }
    }
  }
  cout << ans << '\n';
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  for (int i = 1; i <= 5; i++){
    for (int j = i; j <= 10 - i + 1; j++){
      cnt[i][j] = i;
    }
  }
  for (int i = 6; i <= 10; i++){
    for (int j = 10 - i + 1; j <= i; j++){
      cnt[i][j] = 10 - i + 1;
    }
  }
  int l = 1, r = 10;
  for (int i = 1; i <= 5; i++){
    for (int j = l; j <= r; j++){
      cnt[j][l] = cnt[j][r] = i;
    }
    l++, r--;
  }
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}