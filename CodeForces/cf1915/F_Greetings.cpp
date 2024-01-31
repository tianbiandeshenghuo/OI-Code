#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5;
int n, tr[MAXN];
struct Node{
  int a, b;
  int x, y;
}a[MAXN];
#define lb(x) x & -x
int find(int x){
  int ans = 0;
  for (; x; x -= lb(x)){
    ans += tr[x];
  }
  return ans;
}
void add(int x){
  for (; x <= n; x += lb(x)){
    tr[x]++;
  }
}
bool cmp1(Node a, Node b){
  return a.b < b.b;
}
bool cmp2(Node a, Node b){
  return a.a < b.a;
}
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i].a >> a[i].b;
    tr[i] = 0;
  }
  map<int, int> _, __;
  int ___ = 0, ____ = 0;
  sort(a + 1, a + n + 1, cmp1);
  for (int i = 1; i <= n; i++){
    if (!_.count(a[i].a)){
      _[a[i].a] = ++___;
    }
    if (!__.count(a[i].b)){
      __[a[i].b] = ++____; 
    }
    a[i].x = _[a[i].a];
    a[i].y = __[a[i].b];
  }
  int ans = 0;
  sort(a + 1, a + n + 1, cmp2);
  for (int i = n; i >= 1; i--){
    ans += find(a[i].y - 1);
    add(a[i].y);
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
