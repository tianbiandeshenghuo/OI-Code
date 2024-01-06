#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5;
int n, a[MAXN];
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  int ans = a[1], tmp = a[1];
  for (int i = 2; i <= n; i++){
    if ((a[i] + 6000) % 2 == !((a[i - 1] + 6000) % 2)){
      tmp = max({a[i], tmp + a[i]});
    }else {
      tmp = a[i];
    }
    ans = max(ans, tmp);
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
