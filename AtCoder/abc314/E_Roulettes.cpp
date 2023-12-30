#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, m;
struct Node{
  int c, p, a[105], zero;
} a[105];
double dp[305];
double Solve(int x, int i){
  double ans = 0;
  for (int j = 1; j <= a[i].p; j++){
    if (a[i].a[j]){
      ans += dp[x + a[i].a[j]];
    }
  }
  return (ans + a[i].p * a[i].c) / (a[i].p - a[i].zero);
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    cin >> a[i].c >> a[i].p;
    for (int j = 1; j <= a[i].p; j++){
      cin >> a[i].a[j];
      a[i].zero += !a[i].a[j];
    }
  }
  dp[m] = 0;
  for (int i = m - 1; i >= 0; i--){
    double ans = 1e18;
    for (int j = 1; j <= n; j++){
      ans = min(ans, Solve(i, j));
    }
    dp[i] = ans;
  }
  cout << fixed << setprecision(114514) << dp[0];
  return 0;
}
/*

*/