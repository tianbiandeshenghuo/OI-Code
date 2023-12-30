#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5;
int n, q, a[MAXN], tr[4 * MAXN];
void js(int id, int l, int r){
  if (l == r){
    tr[id] = a[l];
    return ;
  }
  int mid = (l + r) >> 1;
  js(id * 2, l, mid);
  js(id * 2 + 1, mid + 1, r);
  tr[id] = (tr[id * 2] & tr[id * 2 + 1]);
}
int find(int id, int l, int r, int ql, int qr){
  if (l > qr || r < ql){
    return (1ll << 30) - 1;
  }else if (ql <= l && r <= qr){
    return tr[id];
  }
  int mid = (l + r) >> 1;
  return find(id * 2, l, mid, ql, qr) & find(id * 2 + 1, mid + 1, r, ql, qr);
}
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  js(1, 1, n);
  cin >> q;
  while (q--){
    int l, r = n, k;
    cin >> l >> k;
    int tmp = l;
    while (l < r){
      int mid = (l + r + 1) >> 1;
      if (find(1, 1, n, tmp, mid) >= k){
        l = mid;
      }else {
        r = mid - 1;
      }
    }
    cout << (find(1, 1, n, tmp, r) < k ? -1 : r) << ' ';
  }
  cout << '\n';
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