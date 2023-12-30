#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5;
int n, q, a[MAXN];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> q;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  for (int i = 1; i <= n; i++){
    a[i] += a[i - 1];
  }
  a[n + 1] = 1e18;
  while (q--){
    int x;
    cin >> x;
    auto p = upper_bound(a + 1, a + n + 2, x);
    if (*p > x && p != a){
      p--;
    }
    cout << p - a << '\n';
  }
  return 0;
}

