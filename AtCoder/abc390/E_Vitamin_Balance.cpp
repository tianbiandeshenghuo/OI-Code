#include<bits/stdc++.h>

using namespace std;
int n, x;
struct Node{
  int v, a, c;
}a[5005];
int dp[5005][5005][4];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> x;
  for (int i = 1; i <= n; i++){
    cin >> a[i].v >> a[i].a >> a[i].c;
  }
  for (int i = 1; i <= n; i++){
    for (int j = 0; j <= x; j++){
      if (j - a[i].v >= 0){
        dp[i][j][1] = dp[i - 1][j - a[i].v][1];
        dp[i][j][2] = dp[i - 1][j - a[i].v][2];
        dp[i][j][3] = dp[i - 1][j - a[i].v][3];
        dp[i][j][a[i].v] += a[i].a;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i <= x; i++){
    ans = max(ans, min({dp[n][i][1], dp[n][i][2], dp[n][i][3]}));
    cerr << dp[n][i][1] << ' ' << dp[n][i][2] << ' ' << dp[n][i][3] << '\n';
  }
  cout << ans;
  return 0;
}