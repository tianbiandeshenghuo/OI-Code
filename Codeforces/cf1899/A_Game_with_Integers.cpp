#include<bits/stdc++.h>

using namespace std;

void Solve(){
  int n;
  cin >> n;
  cout << (n % 3 == 0 ? "Second" : "First") << '\n';
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