#include<bits/stdc++.h>

using namespace std;
int n, a[10];
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  long long ans = -1;
  for (int i = 1; i <= n; i++){
    a[i]++;
    long long cnt = 1;
    for (int j = 1; j <= n; j++){
      cnt *= a[j];
    }
    ans = max(ans, cnt);
    a[i]--;
  }
  cout << ans << '\n';
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}