#include <bits/stdc++.h>

using namespace std;
int n, a[105], b[105];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  b[0] = 1e9;
  for (int i = 1, x; i <= n; i++){
    cin >> a[i];
    b[a[i]] = i;
  }
  int q;
  cin >> q;
  while (q--){
    int x, y;
    cin >> x >> y;
    cout << (min(b[x], b[y]) == b[x] ? x : y) << '\n';
  }
  return 0;
}