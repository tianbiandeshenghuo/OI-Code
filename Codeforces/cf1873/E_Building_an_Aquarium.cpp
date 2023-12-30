#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5;
int n, x, a[MAXN];
bool check(int p){
  long long cnt = 0;
  for (int i = 1; i <= n; i++){
    cnt += max(0ll, p - a[i]);
    if (cnt > x){
      return 0;
    }
  }
  return 1;
}
void Solve(){
  cin >> n >> x;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  int l = 0, r = 2e18;
  while (l < r){
    int mid = (l + r + 1) >> 1;
    if (check(mid)){
      l = mid;
    }else {
      r = mid - 1;
    }
  }
  cout << l << '\n';
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}