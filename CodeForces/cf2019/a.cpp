#include<bits/stdc++.h>

using namespace std;
int n, a[105];
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  int ans1 = 0, cnt1 = 0, ans2 = 0, cnt2 = 0;
  for (int i = 1; i <= n; i += 2){
    ans1 = max(ans1, a[i]);
    cnt1++;
  }
  for (int i = 2; i <= n; i += 2){
    ans2 = max(ans2, a[i]);
    cnt2++;
  }
  cout << max(ans1 + cnt1, ans2 + cnt2) << '\n';
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