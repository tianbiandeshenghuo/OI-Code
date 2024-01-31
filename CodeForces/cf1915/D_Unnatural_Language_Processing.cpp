#include<bits/stdc++.h>

using namespace std;
int n;
string s;
bool check(char s){
  return s == 'a' || s == 'e';
}
void Solve(){
  cin >> n >> s;
  string ans;
  for (int i = 0; i + 1 < n; i++){
    if (i + 2 < n && !check(s[i]) && check(s[i + 1]) && !check(s[i + 2]) && (i + 1 == n || (!check(s[i + 3])))){
      ans.push_back(s[i]);
      ans.push_back(s[i + 1]);
      ans.push_back(s[i + 2]);
      ans.push_back('.');
      i += 2;
    }else if (i + 1 < n && !check(s[i]) && check(s[i + 1])){
      ans.push_back(s[i]);
      ans.push_back(s[i + 1]);
      ans.push_back('.');
      i++;
    }
  }
  if (ans.back() == '.'){
    ans.pop_back();
  }
  cout << ans << '\n';
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