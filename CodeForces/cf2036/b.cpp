#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5;
int n, t[MAXN], k;
void Solve(){
  cin >> n >> k;
  for (int i = 1; i <= k; i++){
    t[i] = 0;
  }
  for (int i = 1; i <= k; i++){
    int x, y;
    cin >> x >> y;
    t[x] += y;
  }
  priority_queue<int> b;
  for (int i = 1; i <= k; i++){
    b.push(t[i]);
  }
  int ans = 0;
  while (b.size() && n--){
    ans += b.top();
    b.pop();
  }
  cout << ans << '\n';
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