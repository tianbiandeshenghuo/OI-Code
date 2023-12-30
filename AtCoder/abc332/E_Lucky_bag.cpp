#include<bits/stdc++.h>
#define int long long

using namespace std;
int d, n, a[20];
double ans = 4e18;
double p;
int cnt[20];
void dfs(int x){
  if (x == n + 1){
    double q = 0;
    for (int i = 1; i <= d; i++){
      q += (cnt[i] - p) * (cnt[i] - p);
    }
    ans = min(ans, q);
    return ;
  }
  for (int i = 1; i <= d; i++){
    cnt[i] += a[x];
    dfs(x + 1);
    cnt[i] -= a[x];
  }
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> d;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    p += a[i];
  }
  p /= d;
  dfs(1);
  cout << fixed << setprecision(100) << 1.0 * ans / d;
  return 0;
}
