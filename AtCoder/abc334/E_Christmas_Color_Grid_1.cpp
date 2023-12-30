#include<bits/stdc++.h>
#define int long long

using namespace std;
const int Mod = 998244353;
int n, m, cnt, red;
string s[1005];
int vis[1005][1005];
int fx[2][4] = {{1, -1, 0, 0}, {0, 0, 1, -1}};
int power(int a, int b){
  int cnt = 1;
  for (; b; b >>= 1, (a *= a) %= Mod){
    if (b & 1){
      (cnt *= a) %= Mod;
    }
  }
  return cnt;
}
void dfs(int x, int y, int q){
  if (x < 1 || y < 1 || x > n || y > m || vis[x][y] || s[x][y] == '.'){
    return ;
  }
  vis[x][y] = q;
  for (int i = 0; i < 4; i++){
    dfs(x + fx[0][i], y + fx[1][i], q);
  }
}
int check(int x, int y){
  set<int> p;
  for (int i = 0; i < 4; i++){
    int dx = x + fx[0][i], dy = y + fx[1][i];
    if (1 <= dx && dx <= n && 1 <= dy && dy <= m && s[dx][dy] == '#'){
      p.insert(vis[dx][dy]);
    }
  }
  return p.size();
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    cin >> s[i];
    s[i] = ' ' + s[i];
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
      if (s[i][j] == '#' && !vis[i][j]){
        dfs(i, j, ++cnt);
      }
    }
  }
  int ans = 0;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
      if (s[i][j] == '.'){
        red++;
        int tmp = check(i, j);
        if (tmp){
          tmp--;
          (ans += cnt - tmp) %= Mod;
        }else {
          ans += cnt + 1;
        }
      }
    }
  }
  (ans *= power(red, Mod - 2)) %= Mod;
  cout << ans;
  return 0;
}

