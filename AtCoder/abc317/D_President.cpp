#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1e2 + 5, MAXV = 1e5 + 5;
int n, m;
long long dp[105][MAXV];
struct Node{
  int x, y, z;
} a[MAXN];
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  int sum = 0;
  long long cnt = 2e18;
  for (int i = 1; i <= n; i++){
    cin >> a[i].x >> a[i].y >> a[i].z;
    sum += a[i].z;
    for (int j = 0; j <= sum; j++){
      dp[i][j] = 2e18;
    }
  }
  for (int j = 0; j <= sum; j++){
    dp[n + 1][j] = 2e18;
  }
  sum = 0;
  dp[1][0] = 0;
  for (int i = 1; i <= n; i++){
    sum += a[i].z;
    long long tmp = max(0, (a[i].y - a[i].x + 1) / 2);
    for (int j = 0; j <= sum; j++){
      dp[i + 1][j + a[i].z] = min(dp[i + 1][j + a[i].z], dp[i][j] + tmp);
      dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
    }
  }
  int p = sum;
  sum = (sum + 1) / 2;
  for (int i = sum; i <= p; i++){
    cnt = min(cnt, dp[n + 1][i]);
  }
  cout << cnt;
  return 0;
}
/*
dp[i][j] 表示前 i 个选区中要得到 j 张选票至少需要的
*/