#include<bits/stdc++.h>

using namespace std;
int n;
string s;
void Solve(){
  cin >> n >> s;
  int ans = 0;
  for (auto v : s){
    ans += (v == '-' ? -1 : 1);
  }
  cout << abs(ans) << '\n';
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