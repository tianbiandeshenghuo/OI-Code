#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, a[MAXN];
void Solve(){
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  string s;
  s.resize(n);
  map<int, vector<char>> b;
  char cnt = 'a';
  for (int i = n - 1; i >= 0; i--){
    if (!b.count(a[i]) || b[a[i]].size() == 0){
      s[i] = cnt;
      if (a[i]){
        b[a[i] - 1].push_back(cnt);
      }
      cnt++;
    }else {
      s[i] = b[a[i]].back();
      if (a[i]){
        b[a[i] - 1].push_back(s[i]);
      }
      b[a[i]].pop_back();
    }
  }
  cout << s << '\n';
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