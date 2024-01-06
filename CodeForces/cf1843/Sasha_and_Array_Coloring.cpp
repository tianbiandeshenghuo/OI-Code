#include<bits/stdc++.h>

using namespace std;
int t, n, a[55];
void Solve(){
  int ans = 0;
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  for (int i = 1, j = n; i < j; i++, j--){
    ans += a[j] - a[i];
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