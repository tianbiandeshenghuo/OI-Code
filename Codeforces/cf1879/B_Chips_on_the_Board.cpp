#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 3e5 + 5;
int n, a[MAXN], b[MAXN];
void Solve(){
  cin >> n;
  int suma = 0, sumb = 0;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    suma += a[i];
  }
  for (int j = 1; j <= n; j++){
    cin >> b[j];
    sumb += b[j];
  }
  int ans = 2e18;
  for (int i = 1; i <= n; i++){
    ans = min({ans, b[i] * n + suma, a[i] * n + sumb});
  }
  for (int i = 1; i <+ n; i++){

  }
  cout << ans << '\n';
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}
