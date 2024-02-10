#include <bits/stdc++.h>

using namespace std;
int n, m, b[105];
void Solve(){
  cin >> n >> m;
  set<int> a;
  for (int i = 1; i <= n; i++){
    a.insert(i);
  }
  for (int i = 1; i <= m; i++){
    cin >> b[i];
  }
  auto x = a.end();
  x--;
  int cnt = n;
  while (x != a.begin()){
    if (*x == b[m]){
      m--;
    }else {
      cout << cnt << ' ';
    }
    cnt--;
    x--;
  }
  if (b[1] != 1){
    cout << 1;
  }
  cout << '\n';
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
1 2 3 4 5
2 4 5
*/