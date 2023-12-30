#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1e5 + 5;
int n, k, ans, a[MAXN];
void Solve(){
  ans = 114514;
  cin >> n >> k;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    int x = a[i];
    int cnt = 0;
    while (x % k){
      cnt++;
      x++;
    }
    ans = min(ans, cnt);
  }
  if (k == 4){
    int cnt = 0, op = 0, qwq = 0;
    for (int i = 1; i <= n; i++){
      if (a[i] % 2){
        cnt++;
        op++;
      }else if (a[i] % 2 == 0){
        op++;
        qwq++;
      }
    }
    if (op >= 2){
      if (qwq == 0){
        ans = min(ans, 2);
      }
      if (qwq == 1){
        ans = min(ans, 1);
      }
      if (qwq >= 2){
        ans = 0;
      }
    }
  }
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