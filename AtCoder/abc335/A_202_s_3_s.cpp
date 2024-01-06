#include<bits/stdc++.h>

using namespace std;
string s;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> s;
  s[s.size() - 1] = '4';
  cout << s;
  return 0;
}