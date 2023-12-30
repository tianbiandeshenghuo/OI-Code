#include<bits/stdc++.h>

using namespace std;
void Solve(){
  int n;
  cin >> n;
  int a = 2, b = 3;
  cout << "2 3 ";
  for (int i = 3; i <= n; i++){
    if (3 * (b + 1) % (a + b) == 0){
      cout << b + 2 << ' ';
      a = b, b = b + 2;
    }else {
      cout << b + 1 << ' ';
      a = b, b = b + 1;
    }
  }
  cout << '\n';
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