#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 1.5e5 + 5;
int n, a[MAXN], qz[MAXN];
int get(int l, int r){
  return qz[r] - qz[l - 1];
}
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    qz[i] = qz[i - 1] + a[i];
  }
  int ans = -1;
  for (int i = 1; i <= n; i++){
    if (n % i == 0){
      int minn = 1e18, maxx = -1e18;
      for (int j = 1; j <= n; j += i){
        minn = min(minn, get(j, j + i - 1));
        maxx = max(maxx, get(j, j + i - 1));
      }
      ans = max(ans, maxx - minn);
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
/*
1 2 3 3 6 10

*/