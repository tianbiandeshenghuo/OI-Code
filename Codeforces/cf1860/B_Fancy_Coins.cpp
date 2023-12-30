#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5;
void Solve(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (!c && !d){
    cout << a / b + a % b << '\n';
    return ;
  }
  if (c >= a){
    cout << "0\n";
    return ;
  }
  int x = a / b, ans = 0;
  if (x <= d){
    a %= b;
  }else {
    a -= b * d;
  }
  //cerr << a;
  if (a % b <= c){
    c -= a % b;
    a -= a % b;
  }else {
    a = max(0ll, a - c);
  }
  a -= (c / b) * b;
  cout << max(0ll, a / b + a % b) << '\n';
}
signed main(){
  //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}
/*
10 4 1 2

1
*/