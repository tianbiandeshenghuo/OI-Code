#include <bits/stdc++.h>

using namespace std;
int n, a[105];
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  int ans = -1;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      for (int k = 1; k <= n; k++){
        for (int p = 1; p <= n; p++){
          if (i == j || i == k || i == p || j == k || j == p || k == p){
            continue;
          }
          ans = max(ans, abs(a[i] - a[j]) + abs(a[j] - a[k]) + abs(a[k] - a[p]) + abs(a[p] - a[i]));
        }
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