#include<bits/stdc++.h>

using namespace std;
int n, ans;
void Solve(){
  ans = 0;
  cin >> n;
  for (int i = 1; i < n; i++){
    int x;
    cin >> x;
    ans += x;
  }
  cout << -ans << '\n';
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