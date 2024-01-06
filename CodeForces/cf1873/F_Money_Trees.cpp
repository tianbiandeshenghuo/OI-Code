#include<bits/stdc++.h>
using namespace std;
const int MAXN = 2e5 + 5;
int n, k, a[MAXN], h[MAXN], qz[MAXN];
int search(int x, int y){
  int l = x - 1, r = y;
  while (l < r){
    int mid = (l + r + 1) >> 1;
    if (qz[mid] - qz[x - 1] <= k){
      l = mid;
    }else {
      r = mid - 1;
    }
   // cerr << l << ' ' << r << ' ' << mid << '\n';
  }
 // cerr << x << ' ' << l << '\n';
  return (l < x ? 0 : l - x + 1);
}
int check(int l, int r){
  int cnt = 0;
  for (int i = l; i <= r; i++){
    cnt = max(cnt, search(i, r));
  }
  return cnt;
}
void Solve(){
  cin >> n >> k;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    qz[i] = qz[i - 1] + a[i];
  }
  for (int i = 1; i <= n; i++){
    cin >> h[i];
  }
  int ans = 0;
  for (int i = 1, j = 1; i <= n; j = i){
    while (j < n && h[j] % h[j + 1] == 0){
      j++;
    }
    //cerr << i << ' ' << j << '\n';
    ans = max(ans, check(i, j));
    i = j + 1;
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