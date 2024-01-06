#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, a[MAXN];
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  for (int i = 1; i < n; i++){
    if (a[i + 1] - a[i] > 1){
      cout << "NO\n";
      return ;
    }
  }
  
  cout << "YES\n";
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