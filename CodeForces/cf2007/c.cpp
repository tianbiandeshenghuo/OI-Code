#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 1e5 + 5;
int n, a, b, c[MAXN];
void Solve(){
  cin >> n >> a >> b;
  for (int i = 1; i <= n; i++){
    cin >> c[i];
  }
  sort(c + 1, c + n + 1);
  int ans = c[n] - c[1];

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
