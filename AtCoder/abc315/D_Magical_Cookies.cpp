#include<bits/stdc++.h>

using namespace std;
int n, m;
bool v[2005][2005];
string s[2005];
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    cin >> s[i];
    s[i] = ' ' + s[i];
  }
  for (int i = 1; i <= n; i++){
    int vis[200] = {0};
    for (int j = 1; j <= m; j++){
      vis[s[i][j]]++;
    }
    for (int j = 1; j <= m; j++){
      if (vis[s[i][j]] == m){
        v[i][j] = 1;
      }
    }
  }
  for (int j = 1; j <= m; j++){
    int vis[200] = {0};
    for (int i = 1; i <= n; i++){
      vis[s[i][j]]++;
    }
    for (int i = 1; i <= n; i++){
      if (vis[s[i][j]] == n){
        v[i][j] = 1;
      }
    }
  }
  int ans = 0;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
      ans += !v[i][j];cerr << v[i][j];
    }
    cerr << '\n';
  }
  cout << ans;
  return 0;
}