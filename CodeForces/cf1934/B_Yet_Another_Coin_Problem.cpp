#include <bits/stdc++.h>

using namespace std;
int n, a[6] = {0, 1, 3, 6, 10, 15};
int check(int x, int p){
  int cnt = 0;
  for (int i = x; i >= 1; i--){
    cnt += p / a[i];
    p %= a[i];
  }
  return cnt + p;
}
void Solve(){
  cin >> n;
  int ans = 1e9;
  a[1] = 1;
  a[2] = 3;
  a[3] = 6;
  a[4] = 10;
  a[5] = 15;
  do{
    for (int i = 5; i >= 1; i--){
      ans = min(ans, check(i, n));
    }
  }while(next_permutation(a + 1, a + 6));
  cout << ans << '\n';
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}