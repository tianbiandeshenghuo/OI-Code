#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 1e5 + 5;
int n, a[MAXN];
int getans(int x){
  if (x % 3 == 1){
    return x / 3 + 1;
  }
  return x / 3;
}
void Solve(){
  cin >> n;
  int x = 0, y = 0;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  cout << a[1] << ' ';
  x += a[1] % 2;
  y += a[1];
  for (int i = 2; i <= n; i++){
    x += a[i] % 2;
    y += a[i];
    cout << y - getans(x) << ' ';
  }
  cout << '\n';
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
