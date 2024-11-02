#include<bits/stdc++.h>

using namespace std;
int n, a[55];
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  int t = a[1];
  for (int i = 2; i <= n; i++){
    t = (t + a[i]) / 2;
  }
  cout << t << '\n';
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
/*
8 7 5 4 1
8 7 5 2
8 7 3
8 5
*/