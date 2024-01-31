#include<bits/stdc++.h>

using namespace std;
int x, n;
void Solve(){
  cin >> x >> n;
  for (int i = x / n; i >= 1; i--){
    if ((x - i * (n - 1)) % i == 0){
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