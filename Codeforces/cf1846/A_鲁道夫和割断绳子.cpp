#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int t, n;
struct Node{
  int x, y;
  bool operator<(const Node &i){
    return x < i.x;
  }
} a[MAXN];
void Solve(){
  int ans = 0;
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i].x >> a[i].y;
    ans += a[i].x > a[i].y;
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