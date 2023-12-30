#include<bits/stdc++.h>

using namespace std;
int n, a[105];
void Solve(){
  cin >> n;
  int cnt = 1;
  for (int i = 1; i <= n; i++){
    int x;
    cin >> x;
    if (cnt == x){
      cnt++;
    }
    cnt++;
  }
  cout << cnt - 1 << '\n';
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