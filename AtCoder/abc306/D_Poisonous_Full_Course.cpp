#include<bits/stdc++.h>

using namespace std;
const int MAXN = 3e5 + 5;
int n;
long long dp[MAXN][3];
struct Node{
  int d, v;
} a[MAXN];
int main(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i].d >> a[i].v;
    dp[i][0] = dp[i][1] = LONG_LONG_MIN;
  }
  for (int i = 1; i <= n; i++){
    dp[i][0] = dp[i - 1][0];
    dp[i][1] = dp[i - 1][1];
    if (!a[i].d){
      dp[i][0] = max({dp[i][0], dp[i - 1][0] + a[i].v, dp[i - 1][1] + a[i].v});
    }else {
      dp[i][1] = max(dp[i][1], dp[i - 1][0] + a[i].v);
    }
  }
  cout << max({dp[n][0], dp[n][1], 0ll});
  return 0;
}