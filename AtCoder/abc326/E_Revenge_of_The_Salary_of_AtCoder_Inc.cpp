#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 3e5 + 5, Mod = 998244353;
int n, a[MAXN], dp[MAXN];
int power(int a, int b){
  int cnt = 1;
  for (; b; b >>= 1, a = a * a % Mod){
    if (b & 1){
      (cnt *= a) %= Mod;
    }
  }
  return cnt;
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    dp[i] = a[i];
  }
  for (int i = n; i >= 1; i--){
    for (int j = n; j > i; j--){
      (dp[i] += dp[j] * 1) %= Mod;
    }
    cerr << dp[i] << ' ';
  }
  cout << dp[1];
  return 0;
}
/*
3 + 2 + 6 + (3 + 2) + (3 + 6) + (3 + 2 + 6) + (2 + 6)
*/