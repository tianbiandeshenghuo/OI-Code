#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, a[MAXN];
void Solve(){
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for (int i = 1; i < n; i++){
    ans += (a[i] < a[i + 1]);
  }
  cout << max(ans - 1, 0) << '\n';
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