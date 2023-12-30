#include<bits/stdc++.h>

using namespace std;
int t;
void Solve(){
  int n, m;
  long long cnta = 0, cntb = 0;
  cin >> n >> m;
  for (int i = 1, x; i <= n; i++){
    cin >> x;
    cnta += x;
  }
  for (int i = 1, x; i <= m; i++){
    cin >> x;
    cntb += x;
  }
  cout << (cnta < cntb ? "Tenzing" : (cnta == cntb ? "Draw" : "Tsondu")) << '\n';
}
int main(){
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}