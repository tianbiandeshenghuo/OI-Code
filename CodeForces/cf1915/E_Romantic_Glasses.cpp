#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5;
int n, a[MAXN];
void Solve(){
  cin >> n;
  map<int, int> cnt;
  int x = 0, y = 0;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    
  }
  for (int i = 1; i <= n; i++){
    if (i % 2){
      x += a[i];
    }else {
      y += a[i];
    }
    if (x == y || cnt.count(x - y)){
      cout << "YES\n";
      return ;
    }
    cnt[x - y] = 1;
  }
  cout << "NO\n";
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