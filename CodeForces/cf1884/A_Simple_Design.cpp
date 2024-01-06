#include<bits/stdc++.h>

using namespace std;
long long x, k;
int check(int x){
  int cnt = 0;
  while (x){
    cnt += x % 10;
    x /= 10;
  }
  return cnt;
}
void Solve(){
  cin >> x >> k;
  while(check(x) % k){
    x++;
  }
  cout << x << '\n';
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