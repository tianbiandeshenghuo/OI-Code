#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5;
void Solve(){
  long long n, k, x;
  cin >> n >> k >> x;
  cout << ((1 + k) * k / 2 <= x && x <= k * (n + n - k + 1) / 2 ? "YES\n" : "NO\n");
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
