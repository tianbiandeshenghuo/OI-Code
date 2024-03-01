#include <bits/stdc++.h>

using namespace std;
string s;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> s;
  map<char, int> p;
  for (int i = 0; i < s.size(); i++){
    p[s[i]]++;
  }
  for (int i = 0; i < s.size(); i++){
    if (p[s[i]] == 1){
      cout << i + 1;
    }
  }
  return 0;
}