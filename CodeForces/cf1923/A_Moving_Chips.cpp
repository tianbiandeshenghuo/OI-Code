#include <bits/stdc++.h>

using namespace std;
int n, a[55];
bool check(){
  int l, r;
  for (int i = 1; i <= n; i++){
    if (a[i]){
      l = i;
      break;
    }
  }
  for (int i = n; i >= 1; i--){
    if (a[i]){
      r = i;
      break;
    }
  }
  for (int i = l; i <= r; i++){
    if (!a[i]){
      return 0;
    }
  }
  return 1;
}
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  set<int, greater<int>> p;
  int x = 0;
  for (int i = n; i >= 1; i--){
    if (a[i]){
      x = i;
      break;
    }
  }
  for (int i = x; i >= 1; i--){
    if (!a[i]){
      p.insert(i);
    }
  }
  int ans = 0;
  while (1){
    if (check()){
      break;
    }
    ans++;
    while (!a[x]){
      x--;
    }
    auto q = *p.begin();
    p.erase(p.begin());
    swap(a[x], a[q]);
  }
  cout << ans << '\n';
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