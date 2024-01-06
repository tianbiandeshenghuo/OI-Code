#include<bits/stdc++.h>

using namespace std;
void Solve(){
  int ans = 0, n, k;
  string s;
  cin >> n >> k >> s;
  for (int i = 0; i < n; i++){
    if (s[i] == 'B'){
      for (int j = i; j < min(i + k, n); j++){
        s[j] = 'W';
      }
      ans++;
    }
  }
  cout << ans << '\n';
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