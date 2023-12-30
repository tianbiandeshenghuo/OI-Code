#include<bits/stdc++.h>

using namespace std;

signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n, l, ans = 0;
  cin >> n >> l;
  while (n--){
    int x;
    cin >> x;
    (ans += x >= l);
  }
  cout << ans;
  return 0;
}
