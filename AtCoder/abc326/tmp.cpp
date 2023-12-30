#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 1e5 + 5;
int C = -1, ans, n, a[MAXN];
void dfs(int x, int cnt){
  C++, ans += cnt;
  for (int i = x + 1; i <= n; i++){
    dfs(i, cnt + a[i]);
  }
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  dfs(0, 0);
  cout << C << ' ' << ans;
  return 0;
}
/*
3 + 2 + 6 + (3 + 2) + (3 + 6) + (3 + 2 + 6) + (2 + 6)
*/