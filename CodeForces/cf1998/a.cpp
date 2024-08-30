#include<bits/stdc++.h>

using namespace std;

void Solve(){
  int k, x, y;
  cin >> x >> y >> k;
  x *= k;
  y *= k;
  if (!k){
    return ;
  }
  if (k % 2 == 0){
    cout << (!x ? int(5e8) : x) << ' ' << (!y ? int(-5e8) : y) << '\n';
  }else {
    cout << x << ' ' << y << '\n';
  }
  int p = -1e9;
  if (k % 2){
    for (int i = 2; i <= k; i += 2){
      while (abs(p) == abs(x) || abs(p) == abs(y)){
        p++;
      }
      cout << p << ' ' << p << '\n';
      cout << -p << ' ' << -p << '\n';
      p++;
    }
  }else {
    cout << (!x ? int(-5e8) : 0) << ' ' << (!y ? int(5e8) : 0) << '\n';
    for (int i = 2; i < k; i += 2){
      while (abs(p) == abs(x) || abs(p) == abs(y)){
        p++;
      }
      cout << p << ' ' << p << '\n';
      cout << -p << ' ' << -p << '\n';
      p++;
    }
  }
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