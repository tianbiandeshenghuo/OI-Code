#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5, MAXV = 5e6 + 5;
int n, dp[MAXV], ans = 2e18, cnt[MAXV];
vector<int> prime;
void init(){
  bitset<MAXV> vis;
  vis[0] = vis[1] = 1;
  for (int i = 2; i < MAXV; i++){
    if (!vis[i]){
      prime.push_back(i);
      for (int j = 2; j * i < MAXV; j++){
        vis[i * j] = 1;
      }
    }
  }
}
void Solve(){
  cin >> n;
  
  for (int i = 1, x; i <= n; i++){
    cin >> x;
    for (int j = 1; j * j <= x; j++){
      if (x % j == 0){
        cnt[j]++;
        if (j * j != x){
          cnt[x / j]++;
        }
      }
    }
  }
  for (int i = MAXV - 1; i; i--){
    dp[i] = cnt[i] * i;
    for (auto v : prime){
      if (v * i >= MAXV){
        break;
      }
      dp[i] = min(dp[i], dp[i * v] + i * (cnt[i] - cnt[i * v]));
    }
  }
  for (int i = 0; i < MAXV; i++){
    if (cnt[i] == n){
      ans = min(ans, dp[i]);
    }
  }
  cout << ans << '\n';
  return ;
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  init();
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
}