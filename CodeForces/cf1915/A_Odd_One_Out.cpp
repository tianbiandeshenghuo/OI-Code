#include<bits/stdc++.h>

using namespace std;

void Solve(){
  int a, b, c;
  cin >> a >> b >> c;
  map<int, int> mp;
  mp[a]++;
  mp[b]++;
  mp[c]++;
  if (mp[a] == 1){
    cout << a << '\n';
  }else if (mp[b] == 1){
    cout << b << '\n';
  }else {
    cout << c << '\n';
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