#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int t, n, a[MAXN];
void Solve(){
  cin >> n;
  int cnt = -1, ans;
  for (int i = 1; i <= n; i++){
    int x, y;
    cin >> x >> y;
    if (x <= 10 && y > cnt){
      cnt = y, ans = i;
    }
  }
  cout << ans << '\n';
}
int main(){
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}