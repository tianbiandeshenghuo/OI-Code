#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1e5 + 5, MAXV = 1e7 + 5, Mod = 998244353;
int n, t, a[MAXN];
long long dp[MAXV];
long long bpow(long long a, long long b){
  long long cnt = 1;
  for (; b; b >>= 1, (a *= a) %= Mod){
    if (b & 1){
      (cnt *= a) %= Mod;
    }
  }
  return cnt;
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> t;
  t++;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  dp[0] = 1;
  for (int i = 0; i <= t; i++){
    (dp[i + a[1]] += dp[i] * bpow(n, Mod - 2) % Mod) %= Mod;
    for (int j = 2; j <= n; j++){
      if (i + a[j] < t){
        (dp[i + a[j]] += dp[i] * bpow(n, Mod - 2) % Mod) %= Mod;
      }
    }
  }
  long long qwq = 0;
  for (int i = t; i <= t + a[1] - 1; i++){
    (qwq += dp[i]) %= Mod;
  }
  cout << qwq;
  return 0;
}