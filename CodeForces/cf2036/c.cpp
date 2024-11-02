#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
string s;
int q, n;
bool vis[MAXN];
void check(int x, int &cnt){
  if (1 <= x && x + 3 <= n){
    if (s[x] == '1' && s[x + 1] == '1' && s[x + 2] == '0' && s[x + 3] == '0'){
      cnt += !vis[x];
      vis[x] = 1;
    }else {
      cnt -= vis[x];
      vis[x] = 0;
    }
  }
}
void Solve(){
  cin >> s;
  n = s.size();
  s = ' ' + s;
  int cnt = 0;
  for (int i = 1; i <= n; i++){
    vis[i] = 0;
  }
  for (int i = 1; i <= n; i++){
    if (i + 3 <= n && s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0'){
      vis[i] = 1;
      cnt++;
    }
  }
  cin >> q;
  while (q--){
    int x, y;
    cin >> x >> y;
    s[x] = y + '0';
    check(x, cnt);
    check(x - 1, cnt);
    check(x - 2, cnt);
    check(x - 3, cnt);
    check(x - 4, cnt);
    cout << (cnt ? "YES\n" : "NO\n");
  }
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