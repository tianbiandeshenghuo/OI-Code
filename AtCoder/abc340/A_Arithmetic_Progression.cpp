#include <bits/stdc++.h>

using namespace std;
int a, b, n;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> a >> b >> n;
  while (a != b){
    cout << a << ' ';
    a += n;
  }
  cout << b;
  return 0;
}