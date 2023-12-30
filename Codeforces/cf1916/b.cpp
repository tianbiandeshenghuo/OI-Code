#include<bits/stdc++.h>
#define int long long

using namespace std;
int x, y;
void Solve(){
  cin >> x >> y;
  int tmp = gcd(x, y);
  x /= tmp;
  y /= tmp;
  if (x == 1){
    cout << y * y * tmp << '\n';
  }else {
    cout << x * y * tmp << '\n';
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
/*
1 2 4 6
*/