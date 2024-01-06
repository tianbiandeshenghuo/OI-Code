#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5, Mod = 1e18 + 9;
int n, a[MAXN];
int power(int a, int b){
  int cnt = 1;
  for (; b; b >>= 1, (a *= a) %= Mod){
    if (b & 1){
      (cnt *= a) %= Mod;
    }
  }
  return cnt;
}
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    a[i] = power(2, a[i]);
  }
  int ans = 0;
  for (int i = 1; i <= n; i++){
    for (int j = i + 1; j <= n; j++){
      if (power(a[i], a[j]) == power(a[j], a[i])){
        ans++;
      }
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
