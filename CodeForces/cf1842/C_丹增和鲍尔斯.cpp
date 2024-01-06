#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int t, n, a[MAXN];
void Solve(){
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for (int l = 1, r = 1; l <= r && r <= n; ){
    if (l == r){
      r++;
    }
    if (a[l] != a[r]){
      r++;
    }
    if (a[l] == a[r] && l < r){
      ans += r - l + 1;
      l = r = r + 1;
    }
  }
  cout << ans << '\n';
}
int main(){
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}