#include<bits/stdc++.h>
using namespace std;
const int MAXN = 2e5 + 5, Mod = 998244353;
long long dp[MAXN], a;
void Solve(){
  string s;
  cin >> s;
  int n = s.size();
  s = ' ' + s;
  a = 0;
  dp[1] = 1;
  int last = 1;
  for (int i = 2; i <= n; i++){
    dp[i] = dp[i - 1];
    if (s[i] == s[last]){
      a++;
      dp[i] = dp[i - 1] * (a + 1) % Mod;
    }else {
      last = i;
    }
  }
  cout << a << ' ' << dp[n] << '\n';
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}