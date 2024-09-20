#include<bits/stdc++.h>

using namespace std;
int n, x, y;
void Solve(){
  cin >> n >> x >> y;
  cout << max(ceil(1.0 * n / x), ceil(1.0 * n / y)) << '\n';
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