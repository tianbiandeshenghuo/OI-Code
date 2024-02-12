#include <bits/stdc++.h>

using namespace std;
int q, a[105], cnt;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> q;
  while (q--){
    int op, x;
    cin >> op >> x;
    if (op == 1){
      a[++cnt] = x;
    }else {
      cout << a[cnt - x + 1] << '\n';
    }
  }
  return 0;
}