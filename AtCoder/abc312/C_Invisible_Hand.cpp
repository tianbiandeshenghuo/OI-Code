#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, m, a[MAXN], b[MAXN], ans = INT_MAX;
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for (int j = 1; j <= m; j++){
    cin >> b[j];
  }
  sort(a + 1, a + n + 1);
  sort(b + 1, b + m + 1);
  
  for (int i = 1; i <= n; i++){
    if (i >= m + 1 - (lower_bound(b + 1, b + m + 1, a[i]) - (b))){
      ans = min(ans, a[i]);
    }
  }
  for (int j = 1; j <= m; j++){
    if (m - j <= -1 + ((upper_bound(a + 1, a + n + 1, b[j] + 1) - a))){
      ans = min(ans, b[j] + 1);
    }
  }
  cout << ans;
  return 0;
}