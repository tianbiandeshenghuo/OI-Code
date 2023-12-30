#include<bits/stdc++.h>
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#pragma GCC optimize(1)

using namespace std;
const int MAXN = 2.5e4 + 5;
int n, m, lo[MAXN];
int Mmin[2 * MAXN];
void Solve(int Mmin[]){
  int minn = 2e9, x = -1, minnn = 2e9;
  long long ans = 0;
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> lo[i];
    int Qminn = 2e9;
    for (int j = 1, x; j <= lo[i]; j++){
      cin >> x;
      if (x < Qminn){
        Mmin[i] = Qminn;
        Qminn = x;
      }else if (x < Mmin[i]){
        Mmin[i] = x;
      }
    }
    if (Mmin[i] < minn){
      minn = Mmin[i];
      x = i;
    }
    minnn = min(minnn, Qminn);
  }
  for (int i = 1; i <= n; i++){
    if (i != x){
      ans += 1ll * Mmin[i];
    }else {
      ans += 1ll * minnn;
    }
  }
  cout << ans << '\n';
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  for (int i = 1; i <= 2 * MAXN; i++){
    Mmin[i] = 2e9;
  }
  while (t--){
    Solve(Mmin);
  }
  return 0;
}