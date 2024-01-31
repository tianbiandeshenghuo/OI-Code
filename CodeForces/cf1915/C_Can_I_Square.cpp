#include<bits/stdc++.h>
#define int long long

using namespace std;

void Solve(){
  int m, cnt = 0;
  cin >> m;
  for (int i = 1, x; i <= m; i++){
    cin >> x;
    cnt += x;
  }
  if ((int)(sqrt(cnt)) * (int)(sqrt(cnt)) == cnt){
    cout << "YES\n";
  }else {
    cout << "NO\n";
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