#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, m;
set<int> a[MAXN];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1, x; i <= n; i++){
    cin >> x;
    a[i].insert(x);
  }
  while (m--){
    int l, r;
    cin >> l >> r;
    if (a[l].size() > a[r].size()){
      for (auto v : a[r]){
        a[l].insert(v);
      }
      swap(a[l], a[r]);
      set<int> ().swap(a[l]);
      cout << a[r].size() << '\n';
      continue;
    }
    for (auto v : a[l]){
      a[r].insert(v);
    }
    set<int> ().swap(a[l]);
    cout << a[r].size() << '\n';
  }
  return 0;
}

