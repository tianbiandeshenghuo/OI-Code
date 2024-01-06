#include<bits/stdc++.h>
#define int long long

using namespace std;

void Solve(){
  string s;
  cin >> s;
  int ans = 0, cnt = 1;
  for (int i = 0; i < 4; i++){
    if ((s[i] - '0' == 0 ? 10 : s[i] - '0') == cnt){
      ans++;
    }else {
      ans += abs(cnt - (s[i] - '0' == 0 ? 10 : s[i] - '0')) + 1;
      cnt = (s[i] - '0' == 0 ? 10 : s[i] - '0');
    }
  }
  cout << ans << '\n';
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