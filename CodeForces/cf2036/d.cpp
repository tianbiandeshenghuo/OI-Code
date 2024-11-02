#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1e3 + 5;
int n, m;
string s[MAXN];

void Solve(){
  cin >> n >> m;
  for (int i = 0; i < n; i++){
    cin >> s[i];
    s[i] = s[i];
  }
  int ans = 0;
  for (int i = 0; i < min(n / 2, m / 2); i++){
    string t;
    for (int j = i; j < m - i; j++){
      t.push_back(s[i][j]);
    }
    for (int j = i + 1; j < n - i; j++){
      t.push_back(s[j][m - i - 1]);
    }
    for (int j = m - i - 2; j > i; j--){
      t.push_back(s[n - i - 1][j]);
    }
    for (int j = n - i - 1; j > i; j--){
      t.push_back(s[j][i]);
    }
    int cnt = 0;
    for (int i = 0; i + 3 < t.size(); i++){
      (cnt += (t[i] == '1' && t[i + 1] == '5' && t[i + 2] == '4' && t[i + 3] == '3'));
    }
    t = t + t;
    for (int i = 0; i + 3 < t.size(); i++){
      (ans += (t[i] == '1' && t[i + 1] == '5' && t[i + 2] == '4' && t[i + 3] == '3'));
    }
    ans -= cnt;
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