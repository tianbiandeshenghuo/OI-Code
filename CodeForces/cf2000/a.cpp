#include<bits/stdc++.h>

using namespace std;

void Solve(){
  string s;
  cin >> s;
  if (s.size() < 3 || s[0] != '1' || s[1] != '0'){
    cout << "no\n";
    return ;
  }
  int cnt = 0;
  for (int i = 2; i < s.size(); i++){
    if (i == 2 && s[i] == '0'){
      cout << "no\n";
      return ;
    }
    cnt = cnt * 10 + s[i] - '0';
  }
  cout << (cnt >= 2 ? "yes\n" : "no\n");
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