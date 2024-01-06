#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int t, n, a[MAXN], k;
void Solve(){
  cin >> n >> k;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  if (n == 1){
    cout << "0\n";
    return ;
  }
  sort(a + 1, a + n + 1);
  a[n + 1] = INT_MAX;
  int ans = INT_MAX;
  for (int i = 1; i <= n; ){
    for (int j = i; j <= n; j++){
      if (a[j + 1] - a[j] > k){
        ans = min(ans, n - (j - i + 1));
        i = j + 1;
        break;
      }else if (j == n){
        i = n + 1;
      }
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