#include<bits/stdc++.h>

using namespace std;

void Solve(){
  string s;
  cin >> s;
  if (s == "abc"){
    cout << "YES\n";
    return ;
  }
  swap(s[0], s[1]);
  if (s == "abc"){
    cout << "YES\n";
    return ;
  }
  swap(s[0], s[1]);
  swap(s[0], s[2]);
  if (s == "abc"){
    cout << "YES\n";
    return ;
  }
  swap(s[0], s[2]);
  swap(s[1], s[2]);
  if (s == "abc"){
    cout << "YES\n";
  }else {
    cout << "NO\n";
  }
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}