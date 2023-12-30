#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, m, a[MAXN];
void Solve(){
  cin >> n;
  int maxx = -1;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    maxx = max(maxx, a[i]);
  }
  bool flag = 0;
  for (int i = 1; i < n; i++){
    if (a[i + 1] < a[i]){
      flag = 1;
    }
  }
  if (!flag){
    cout << "0\n";
    return ;
  }else if (n == 2){
    cout << "1\n";
    return ;
  }
  int cnt = 2e9, ans = 0; 
  for (int i = 1; i < n; i++){
    if (a[i] < cnt){
      cnt = a[i], ans = max(1, i - 1);
    }
  }
  cout << (a[1] == maxx || a[n] == maxx ? a[ans] : maxx) << '\n';
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