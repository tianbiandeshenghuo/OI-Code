#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int t, n, m, a[MAXN];
void Solve(){
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    sum += a[i];
  }
  cout << (sum % 2 == 0 ? "YES\n" : "NO\n");
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}