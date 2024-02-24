#include <bits/stdc++.h>

using namespace std;
int n;
string s[15];
void Solve(){
  cin >> n;
  set<int> p;
  for (int i = 1; i <= n; i++){
    cin >> s[i];
    int cnt = 0;
    for (auto v : s[i]){
      if (v == '1'){
        cnt++;
      }
    }
    if (cnt){
      p.insert(cnt);
    }
  }
  cout << (p.size() == 1 ? "SQUARE" : "TRIANGLE") << '\n';
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