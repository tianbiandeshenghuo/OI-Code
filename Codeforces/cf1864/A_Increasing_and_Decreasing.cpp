#include<bits/stdc++.h>

using namespace std;
void Solve(){
  int x, y, n;
  cin >> x >> y >> n;
  int a[1005];
  a[1] = x, a[n] = y;
  int cnt = 1;
  for (int i = n - 1; i > 1; i--){
    a[i] = a[i + 1] - cnt;
    cnt++;
  }
  x = a[2] - a[1];
  for (int i = 2; i < n; i++){
    if (a[i + 1] <= a[i] || a[i + 1] - a[i] >= x){
      cout << "-1\n";
      return ;
    }
    x = a[i + 1] - a[i];
  }
  for (int i = 1; i <= n; i++){
    cout << a[i] << " \n"[i == n];
  }
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