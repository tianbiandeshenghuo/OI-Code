#include<bits/stdc++.h>

using namespace std;
int a, b;
void Solve(){
  cin >> a >> b;
  if ((b - a) % 2 == 0){
    cout << "Bob\n";
  }else {
    cout << "Alice\n";
  }
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