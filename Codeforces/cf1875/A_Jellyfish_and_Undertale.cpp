#include<bits/stdc++.h>

using namespace std;
int n, a, b, x[105];
void Solve(){
  cin >> b >> a >> n;
  long long ans = a;
  for (int i = 1; i <= n; i++){
    cin >> x[i];
    ans += min(b, x[i] + 1) - 1;
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
/*
3
2
1
2
1
5
4
3
2
1

*/