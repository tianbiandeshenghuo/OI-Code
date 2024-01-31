#include<bits/stdc++.h>

using namespace std;
int n, k;
void Solve(){
  cin >> n >> k;
  while (n--){
    for (int i = 1; i <= k; i++){
      cout << (char)(i + 'a' - 1);
    }
  }
  cout << '\n';
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