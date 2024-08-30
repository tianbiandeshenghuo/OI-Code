#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, a[MAXN];
bool vis[MAXN];
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    vis[i] = 0;
  }
  vis[0] = vis[n + 1] = 0;
  vis[a[1]] = 1;
  for (int i = 2; i <= n; i++){
    if (vis[a[i] + 1] || vis[a[i] - 1]){

    }else {
      cout << "no\n";
      return ;
    }
    vis[a[i]] = 1;
  }
  cout << "yes\n";
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