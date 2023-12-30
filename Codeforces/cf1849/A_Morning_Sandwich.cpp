#include<bits/stdc++.h>

using namespace std;
int t;
void Solve(){
  int a, b, c, cnt = 0;
  cin >> a >> b >> c;
  b += c;
  while (a > 1 && b){
    a--, b--, cnt += 2;
  }
  cout << cnt + 1 << '\n';
}
int main(){
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}