#include<bits/stdc++.h>
#define int long long

using namespace std;
int n, s, m, l, ans = 2e18;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> s >> m >> l;
  for (int i = 0; i <= 100; i++){
    for (int j = 0; j <= 100; j++){
      for (int k = 0; k <= 100; k++){
        if (i * 6 + j * 8 + k * 12 >= n){
          ans = min(ans, i * s + j * m + k * l);
        }
      }
    }
  }
  cout << ans;
  return 0;
}
