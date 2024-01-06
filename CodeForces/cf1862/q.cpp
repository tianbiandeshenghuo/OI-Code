#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, a[MAXN];
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  if (a[1] != n){    
    cout << "NO\n";
    return ;
  }
  int cnt = -1;
  for (int i = 2; i <= n; i++){
    if (a[i] != a[i - 1]){
      cnt = a[i - 1] - a[i];
    }
  }
  bool flag = 1;
  for (int i = 2; i <= n; i++){
    if (a[i] != a[i - 1]){
      if (a[i - 1] - a[i] != cnt){
        flag = 0;
      }
    }
  }
  int p = 1;
  for (int i = 2; i <= n + 1; i++){
    if (a[i] != a[i - 1]){
      if (a[i - 1] != a[1]){
        if (p < cnt){
          flag = 0;
        }
      }
      p = 1;
    }else {
      p++;
    }
  }
  cout << (flag ? "YES\n" : "NO\n");
}
int main(){
  //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}