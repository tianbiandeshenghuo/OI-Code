#include <bits/stdc++.h>

using namespace std;
const int MAXN = 3e5 + 5;
int n, k;
struct Node{
  int a, x;
  bool operator<(const Node &i)const{
    return x < i.x;
  }
}a[MAXN];
void Solve(){
  cin >> n >> k;
  for (int i = 1; i <= n; i++){
    cin >> a[i].a;
  }
  for (int i = 1; i <= n; i++){
    cin >> a[i].x;
    a[i].x = abs(a[i].x);
  }
  sort(a + 1, a + n + 1);
  int l = 1, x = 0;
  while (l <= n){
    int q = k;
    if (x >= a[l].x){
      cout << "NO\n";
      return ;
    }
    while (q >= a[l].a && l <= n){
      q -= a[l].a;
      l++;
    }
    a[l].a -= q;
    x++;
    if (l == n + 1){
      cout << "YES\n";
      return ;
    }
  }
  cout << "YES\n";
}
signed main(){
  int t = 1;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}