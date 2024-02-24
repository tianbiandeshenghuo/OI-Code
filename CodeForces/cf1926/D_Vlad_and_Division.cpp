#include <bits/stdc++.h>

using namespace std;

void Solve(){
  int n, ans = 0;
  cin >> n;
  int a[35][3] = {0};
  while (n--){
    int x;
    cin >> x;
    for (int i = 30; i >= 0; i--){
      a[i][((x >> i) & 1)]++;
    }
  }
  for (int i = 30; i >= 0; i--){
    ans = max({ans, a[i][0], a[i][1]});
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