#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int t, n, a[MAXN];
void Solve(){
  int a, b, c;
  cin >> a >> b >> c;
  cout << (a + b >= 10 || a + c >= 10 || b + c >= 10 ? "YES\n" : "NO\n");
}
int main(){
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}