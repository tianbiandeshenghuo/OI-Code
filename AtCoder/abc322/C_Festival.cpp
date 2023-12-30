#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, m, a[MAXN];
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= m; i++){
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++){
    cout << *lower_bound(a + 1, a + m + 1, i) - i << '\n';
  }
  return 0;
}