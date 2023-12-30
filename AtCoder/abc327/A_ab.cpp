#include<bits/stdc++.h>

using namespace std;
string s;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> s >> s;
  for (int i = 0; i < s.size() - 1; i++){
    if ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a')){
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
  return 0;
}