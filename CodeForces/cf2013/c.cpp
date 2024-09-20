#include<bits/stdc++.h>

using namespace std;
int n;
bool f;
bool ask(string t){
  cout << "? " << t << endl;
  int x;
  cin >> x;
  return x;
}
void dfs(int x, string s){
  if (f){
    return ;
  }
  if (x == n + 1){
    cout << "! " << s << endl;
    f = 1;
    return ;
  }
  if (ask(s + "0")){
    dfs(x + 1, s + '0');
  }
  if (ask(s + '1')){
    dfs(x + 1, s + '1');
  }
}
void Solve(){
  cin >> n;
  dfs(2, "0");
  if (!f){
    dfs(2, "1");
  }
  f = 0;
}
signed main(){
  int t = 1;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}