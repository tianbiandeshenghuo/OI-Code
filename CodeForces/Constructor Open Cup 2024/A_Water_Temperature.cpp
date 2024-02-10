#include <bits/stdc++.h>

using namespace std;
int n, l, r, k, a[204];
void Solve(){
  cin >> n >> l >> r >> k;
  a[0] = 0;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  int f = 0;
  for (int i = 0; i <= n; i++){
    if (i){
      k += f * (a[i] - a[i - 1]);
    }
    if (l <= k && k <= r){
      cout << a[i] << '\n';
      return ;
    }else if (k > r){
      f = -1;
    }else {
      f = 1;
    }
  }
  cerr << '\n';
  cout << "-1\n";
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