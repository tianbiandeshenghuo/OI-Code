#include <bits/stdc++.h>

using namespace std;
string s, t;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> s >> t;
  int cnt = 0;
  bool vis[3];
  for (int i = 0; i < s.size() && cnt != 3; i++){
    if (s[i] - 'a' + 'A' == t[cnt]){
      vis[cnt] = 1;
      cnt++;
    }
  }
  if (t[2] == 'X'){
    cout << (cnt >= 2 ? "Yes" : "No");
  }else {
    cout << (cnt > 2 ? "Yes" : "No");
  }
  return 0;
}