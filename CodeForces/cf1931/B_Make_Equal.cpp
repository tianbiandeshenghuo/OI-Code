#include <bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, a[MAXN];
void Solve(){
  cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    cnt += a[i];
  }
  if (cnt % n){
    cout << "NO\n";
    return ;
  }
  cnt /= n;
  bool f = 0;
  for (int i = 1; i <= n; i++){
    if (a[i] > cnt && f){
      cout << "NO\n";
      return ;
    }else if (a[i] < cnt){
      f = 1;
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