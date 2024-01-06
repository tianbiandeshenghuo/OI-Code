#include<bits/stdc++.h>

using namespace std;
int n, m, k, a[55], b[55];
void Solve(){
  cin >> n >> m >> k;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for (int j = 1; j <= m; j++){
    cin >> b[j];
  }
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