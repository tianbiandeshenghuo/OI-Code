#include<bits/stdc++.h>

using namespace std;
string s;
signed main(){
  cin >> s;
  int l, r;
  for (int i = 0; i < s.size(); i++){
    if (s[i] == '|'){
      l = i;
      break;
    }
  }
  for (int i = s.size() - 1; i >= 0; i--){
    if (s[i] == '|'){
      r = i;
      break;
    }
  }
  for (int i = 0; i < s.size(); i++){
    if (l <= i && i <= r){
      continue;
    }
    cout << s[i];
  }
  return 0;
}