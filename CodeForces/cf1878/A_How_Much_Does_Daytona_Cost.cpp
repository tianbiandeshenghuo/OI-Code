#include<bits/stdc++.h>

using namespace std;
int n, a[105], k;
void Solve(){
  cin >> n >> k;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++){
    int vis[105] = {0};
    for (int j = i; j <= n; j++){
      vis[a[j]]++;
      int maxx = -1, id = 0;
      for (int p = 1; p <= 100; p++){
        if (vis[p] > maxx){
          maxx = vis[p], id = p;
        }
      }
      if (id == k){
        cout << "YES\n";
        return ;
      }
    }
  }
  cout << "NO\n";
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