#include<bits/stdc++.h>
using namespace std;
const int MAXN = 2e5 + 5;

void Solve(){
  int n;
  int a1, e1, flag = 0;
  cin >> n >> a1 >> e1;
  for (int i = 2; i <= n; i++){
    int x, y;
    cin >> x >> y;
    if (x >= a1 && y >= e1){
      flag = 1;
    }
  }
  if (flag){
    cout << "-1\n";
  }else {
    cout << a1 << '\n';
  }
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}