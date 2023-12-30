#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 1e5 + 5;
int n, p, ans;
struct Node{
  int a, b;
  bool operator<(const Node &i)const{
    return b == i.b ? a > i.a : b < i.b;
  }
}a[MAXN];
void Solve(){
  cin >> n >> p;
  for (int i = 1; i <= n; i++){
    cin >> a[i].a;
  }
  for (int i = 1; i <= n; i++){
    cin >> a[i].b;
    a[i].b = min(a[i].b, p);
  }
  ans = p;
  sort(a + 1, a + n + 1);
  int l = 1, q = n - 1;
  for (int i = 1; l <= n; i++){
    l += a[i].a;
    ans += max(1ll, min(n - l, a[i].a)) * a[i].b;
  }
  cout << ans << '\n';
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
/*
1  3
2  1
3  2
4  2


*/