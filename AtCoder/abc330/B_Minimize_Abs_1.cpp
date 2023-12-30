#include<bits/stdc++.h>

using namespace std;
int n, l, r;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> l >> r;
  while (n--){
    int x;
    cin >> x;
    x = max(x, l);
    x = min(x, r);
    cout << x << ' ';
  }
  return 0;
}
