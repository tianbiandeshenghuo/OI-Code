#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, a[MAXN], b[MAXN];
int check(){
  int cnt = 0;
  for (int i = 1; i<= n; i++){
    for (int j = 1; j <= n; j++){
      int q = 0, p = 0;
      for (int k = i; k <= j; k++){
        q += a[k], p += b[k];
      }
      cnt += (q == p);
    }
  }
  return cnt;
}
void Solve(){
  cin >> n;
  int cnt = 1e9;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    b[i] = i;
  }
  for (int i = 2; i <= n; i++){
    cout << a[i] << ' ';
  }
  cout << a[1] << '\n';
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