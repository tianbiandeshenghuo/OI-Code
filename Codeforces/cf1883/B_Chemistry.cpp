#include<bits/stdc++.h>

using namespace std;
int n, k;
string s;
void Solve(){
  cin >> n >> k;
  cin >> s;
  int vis[27] = {0};
  for (auto v : s){
    vis[v - 'a']++;
  }
  n = (n - k) / 2;
  int cnt = 0;
  bool f = 0;
  for (int i = 0; i < 26; i++){
    cnt += vis[i] / 2;
  }
  cout << (cnt >= n ? "YES\n" : "NO\n");
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