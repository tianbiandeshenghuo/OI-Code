#include <bits/stdc++.h>

using namespace std;
int n, m, l, q, a[105], b[105], c[105];
map<int, bool> mp;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  cin >> m;
  for (int i = 1; i <= m; i++){
    cin >> b[i];
  }
  cin >> l;
  for (int i = 1; i <= l; i++){
    cin >> c[i];
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
      for (int k = 1; k <= l; k++){
        mp[a[i] + b[j] + c[k]] = 1;
      }
    }
  }
  cin >> q;
  while (q--){
    int x;
    cin >> x;
    cout << (mp.count(x) ? "Yes\n" : "No\n");
  }
  return 0;
}