#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 1e6 + 5;
int n, ans, tr[MAXN], a[MAXN];
inline int lb(int x){
  return x & -x;
}
void add(int x, int p){
  while (x){
    tr[x] += p;
    x -= lb(x);
  }
}
int get(int x){
  int ans = 0;
  for (; x < MAXN; x += lb(x)){
    ans += tr[x];
  }
  return ans;
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    add(a[i] - 1, a[i]);
  }
  for (int i = 1; i <= n; i++){
    cout << get(a[i]) << ' ';
  }
  return 0;
}
