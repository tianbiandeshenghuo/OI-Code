#include<bits/stdc++.h>

using namespace std;
int a[55];
void Solve(){
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for (int i = 1; i < n; i++){
    if (abs(a[i] - a[i + 1]) == 7 || abs(a[i] - a[i + 1]) == 5){

    }else {
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