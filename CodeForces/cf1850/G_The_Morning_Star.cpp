#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int t, n, a[MAXN][2];
int fx[2][8] = {{1, -1, 0, 0, 1, 1, -1, -1}, {0, 0, 1, -1, 1, -1, 1, -1}};
void Solve(){
  cin >> n;
  map<int, int> x, y, z;
  for (int i = 1; i <= n; i++){
    cin >> a[i][0] >> a[i][1];
    x[abs(a[i][0] - a[i][1])]++;
    y[a[i][0]]++;
    z[a[i][1]]++;
  }
  long long ans = 0;
  for (int i = 1; i <= n; i++){
    if(x[abs(a[i][0] - a[i][1])] || y[a[i][0]] || z[a[i][1]]){
      ans++;
    }
  }
  cout << ans << '\n';
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}