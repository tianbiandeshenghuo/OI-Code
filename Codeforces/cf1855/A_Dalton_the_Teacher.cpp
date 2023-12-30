#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1e5 + 5;
int t, n, a[MAXN];
void Solve(){
  cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    cnt += a[i] == i;
  }
  cout << (cnt + 1) / 2 << '\n';
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}