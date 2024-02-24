#include <bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5;
int a[MAXN];
void Solve(){
  int n;
  cin >> n;
  cout << a[n] << '\n';
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  for (int i = 1; i < MAXN; i++){
    int x = i;
    while (x){
      a[i] += x % 10;
      x /= 10;
    }
    a[i] += a[i - 1];
  }
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}