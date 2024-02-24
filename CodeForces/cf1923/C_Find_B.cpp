#include <bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 3e5 + 5;
int n, q, a[MAXN], cnt[MAXN], sum[MAXN];
void Solve(){
  cin >> n >> q;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    cnt[i] = cnt[i - 1] + (a[i] == 1);
    sum[i] = sum[i - 1] + a[i];
  }
  while (q--){
    int l, r;
    cin >> l >> r;
    if (l == r){
      cout << "NO\n";
      continue;
    }
    int x = cnt[r] - cnt[l - 1];
    int s = sum[r] - sum[l - 1];
    cout << (x < s - x ? "YES\n" : "NO\n");
  }
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