#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, a[MAXN];
void Solve(){
  bool vis[MAXN] = {0};
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    ans += !vis[a[i] - 1];
    vis[a[i]] = 1;
  }
  cout << ans - 1 << '\n';
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}