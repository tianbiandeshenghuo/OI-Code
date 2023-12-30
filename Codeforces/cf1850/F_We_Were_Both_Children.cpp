#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int t, n, a[MAXN];
void Solve(){
  cin >> n;
  int _lcm[MAXN] = {0};
  int ans = 0;
  _lcm[0] = 1;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  for (int i = 1; i <= n; i++){
    _lcm[i] = lcm(_lcm[i - 1], a[i]);
    if (_lcm[i] <= n){
      cout << _lcm[i] << ' ';
      ans = max(ans, i);
    }
  }
  cout << ans << '\n';
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}