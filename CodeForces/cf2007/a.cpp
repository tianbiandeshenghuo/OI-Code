#include<bits/stdc++.h>

using namespace std;
int l, r;
void Solve(){
  cin >> l >> r;
  int a = 0, b = 0;
  if (l % 2){
    a++;
  }
  l++;
  a += (r - l + 1) / 2;
  b += (r - l + 1) / 2;
  cout << min(a, b / 2) << '\n';
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
10 11 12
13 14 15
16 17 18
19 20 21
*/