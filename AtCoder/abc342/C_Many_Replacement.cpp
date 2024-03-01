#include <bits/stdc++.h>

using namespace std;
int n;
string s;
string p;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> s;
  int q;
  cin >> q;
  for (char i = 'a'; i <= 'z'; i++){
    p.push_back(i);
  }
  while (q--){
    char a, b;
    cin >> a >> b;
    for (auto &v : p){
      if (v == a){
        v = b;
      }
    }
  }
  for (auto v : s){
    cout << p[v - 'a'];
  }
  return 0;
}