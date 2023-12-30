#include<bits/stdc++.h>

using namespace std;
int t, n;
void Solve(int n){
  int a[105] = {0};
  //cin >> n;
  int maxx = -1;
  for (int i = 1, x; i <= n; i++){
    cin >> x;
    a[x]++;
    maxx = max(maxx, x);
  }
  if ((a[0] == 0) || (maxx == 1 && a[1] > a[0])){
    cout << "NO\n";
    return ;
  }
  for (int i = 0; i < maxx; i++){
    if (a[i + 1] > a[i]){
      cout << "NO\n";
      return ;
    }
  }
  cout << "YES\n";
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> t;
  while (cin >> t){
    Solve(t);
  }
  return 0;
}