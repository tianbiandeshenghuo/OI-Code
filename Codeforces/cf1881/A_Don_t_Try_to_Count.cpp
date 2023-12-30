#include<bits/stdc++.h>

using namespace std;
int n, m;
string x, s;
bool find(string a, string b){
  if (a.size() < b.size()){
    return 0;
  }
  for (int i = 0; i < a.size() - m + 1; i++){
    if (a.substr(i, m) == b){
      return 1;
    }
  }
  return 0;
}
void Solve(){
  cin >> n >> m >> x >> s;
  if (find(x, s)){
    cout << "0\n";
    return ;
  }
  for (int i = 1; i <= 10; i++){
    x = x + x;
    if (find(x, s)){
      cout << i << '\n';
      return ;
    }
  }
  cout << "-1\n";
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  //t = 1;
  while (t--){
    Solve();
  }
  return 0;
}