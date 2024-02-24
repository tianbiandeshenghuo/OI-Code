#include <bits/stdc++.h>

using namespace std;

void Solve(){
  int n, k;
  cin >> n >> k;
  for (int i = 1; i <= n; i++){
    if (n / i / 2 >= k){
      cout << i * k * 2 << '\n';
      break;
    }else {
      k -= n / i / 2;
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