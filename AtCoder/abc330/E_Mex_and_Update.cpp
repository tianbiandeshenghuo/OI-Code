#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, q, a[MAXN];
map<int, int> b;
set<int> c;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> q;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    b[a[i]]++;
  }
  for (int i = 0; i <= n; i++){
    if (!b[i]){
      c.insert(i);
    }
  }
  while (q--){
    int x, y;
    cin >> x >> y;
    b[a[x]]--;
    if (!b[a[x]]){
      c.insert(a[x]);
    }
    a[x] = y;
    b[a[x]]++;
    if (b[a[x]] == 1){
      c.erase(y);
    }
    cout << *c.begin() << '\n';
  }
  return 0;
}
