#include <bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 5e5 + 5;
int n, ans;
struct Node{
  int l, r;
  bool operator<(const Node &i)const{
    return l == i.l ? r > i.r : l < i.l;
  }
}a[MAXN];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i].l >> a[i].r;
  }
  sort(a + 1, a + n + 1);
  for (int i = 1; i <= n; i++){
    int j = i, cnt = 0;
    while (a[i].l == a[j].l){
      j++, cnt++;
    }
    ans += cnt * (cnt - 1) / 2;
    i = j;
  }
  cout << ans;
  return 0;
}