#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int t, n, m, k, h, a;
void Solve(){
  cin >> n >> m >> k >> h;
  int ans = 0;
  for (int i = 1; i <= n; i++){
    cin >> a;
    ans += (abs(h - a) % k == 0 && a / k != h / k && abs(h - a) <= (m - 1) * k);
    if (abs(h - a) % k == 0 && a / k != h / k && abs(h - a) <= (m - 1) * k){
    }
  }
  cout << ans << '\n';
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}
/*
6 13 3 28
30 70 85 13 1 55
人数:6
台阶数：13
高度差：3
弗拉德高度：28

*/