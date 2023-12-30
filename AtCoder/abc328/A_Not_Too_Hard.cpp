#include<bits/stdc++.h>

using namespace std;
int n, x, ans;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> x;
  while (n--){
    int q;
    cin >> q;
    if (q <= x){
      ans += q;
    }
  }
  cout << ans;
  return 0;
}
