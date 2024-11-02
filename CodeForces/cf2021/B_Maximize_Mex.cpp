#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, x, a[MAXN];
int vis[MAXN];
void Solve(){
  cin >> n >> x;
  for (int i = 0; i <= n + 1; i++){
    vis[i] = 0;
  }
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    if (a[i] > MAXN){
      continue;
    }
    vis[a[i]]++;
  }
  sort(a + 1, a + n + 1);
  if (a[1] != 0){
    cout << "0\n";
    return ;
  }
  for (int i = 0; i <= n; i++){
    if (vis[i] > 1 && i + x < MAXN){
      vis[i + x] += vis[i] - 1;
      vis[i] = 1;
    }
  }
  for (int i = 0; i <= n + 1; i++){
    if (!vis[i]){
      cout << i << '\n';
      return ;
    }
  }
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