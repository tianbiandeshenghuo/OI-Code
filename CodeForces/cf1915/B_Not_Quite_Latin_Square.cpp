#include<bits/stdc++.h>

using namespace std;

void Solve(){
  string a, b, c;
  cin >> a >> b >> c;
  map<char, int> mp[4][2];
  for (auto v : a){
    if (v == '?'){
      mp[1][0][v] = 1;
    }else {
      mp[1][1][v]++;
    }
  }
  for (auto v : b){
    if (v == '?'){
      mp[2][0][v] = 1;
    }else {
      mp[2][1][v]++;
    }
  }
  for (auto v : c){
    if (v == '?'){
      mp[3][0][v] = 1;
    }else {
      mp[3][1][v]++;
    }
  }
  if (mp[1][0]['?']){
    for (char i = 'A'; i <= 'C'; i++){
      if (!mp[1][1].count(i)){
        cout << i << '\n';
      }
    }
  }else if (mp[2][0]['?']){
    for (char i = 'A'; i <= 'C'; i++){
      if (!mp[2][1].count(i)){
        cout << i << '\n';
      }
    }
  }else {
    for (char i = 'A'; i <= 'C'; i++){
      if (!mp[3][1].count(i)){
        cout << i << '\n';
      }
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