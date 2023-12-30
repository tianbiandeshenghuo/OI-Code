#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int t, n, m;
string s;
struct Node{
  int l, r;
  bool operator<(const Node &i)const{
    return (l == i.l ? r < i.r : l < i.l);
  }
} a[MAXN];
void Solve(){
  cin >> n >> m >> s;
  s = ' ' + s;
  int qz[MAXN] = {0};
  for (int i = 1; i <= n; i++){
    qz[i] = qz[i - 1] + s[i] - '0';
  }
  for (int i = 1; i <= m; i++){
    cin >> a[i].l >> a[i].r;
  }
  sort(a + 1, a + m + 1);
  int ans = 1;
  for (int i = 2; i <= m; i++){
    if ((a[i].r == a[i - 1].r + 1) && (a[i].l == a[i].r || qz[a[i].r] - qz[a[i].l - 1] == qz[a[i - 1].r] - qz[a[i - 1].l - 1] + 1)){
      continue;
    }
    //cout << a[i].l << ' ' << a[i].r << '\n';
    ans++;
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