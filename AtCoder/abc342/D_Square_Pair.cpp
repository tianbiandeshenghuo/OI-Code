#include <bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5;
int n, a[MAXN];
int cnt[MAXN];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  int T = n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    cnt[a[i]]++;
  }
  sort(a + 1, a + n + 1);
  int ans = 0;
  for (int x = 1; x <= n; x++){
    int i = a[x];
    if (!i){
      continue;
    }
    for (int j = 0; j < MAXN; j++){
      if (j * j / a[n] > a[n]){
        break;
      }
      cerr << j << ' ' << i << ' ' << j * j / i << ' ' << cnt[j * j / i] << '\n';
      if (j * j % i == 0){
        ans += cnt[j * j / i];
      }
    }
  }
  cout << ans;
  return 0;
}