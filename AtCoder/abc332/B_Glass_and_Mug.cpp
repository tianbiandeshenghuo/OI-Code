#include<bits/stdc++.h>

using namespace std;
int k, g, m, a, b;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> k >> g >> m;
  for (int i = 1; i <= k; i++){
    if (b == g){
      b = 0;
    }else if (!a){
      a += m;
    }else {
      int p = min(a, g - b);
      b += p;
      a -= p;
    }
  }
  cout << b << ' ' << a;
  return 0;
}
