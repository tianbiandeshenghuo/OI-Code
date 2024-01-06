#include<bits/stdc++.h>

using namespace std;
void Solve(){
  int n;
  cin >> n;
  if (n <= 6){
    cout << "NO\n";
    return ;
  }
  int x = 1, y = 2, z = 4;
  z += n - 7;
  if (z % 3 == 0){
    z -= 2;
    y += 2;
  }
  if (y % 3 == 0 || z % 3 == 0 || y == z){
    cout << "NO\n";
  }else {
    cout << "YES\n" << x << ' ' << y << ' ' << z << '\n';
  }
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
/*
18
1 4
*/