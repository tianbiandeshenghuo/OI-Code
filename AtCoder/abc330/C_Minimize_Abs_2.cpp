#include<bits/stdc++.h>
#define int long long

using namespace std;
int d, ans = 1e18;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> d;
  int x = sqrt(d);
  for (int i = 1; i <= 1e6; i++){
    long long y = d - i * i;
    y = sqrt(y);
    ans = min({ans, abs(i * i + y * y - d), abs(i * i + (y + 1) * (y + 1) - d), abs(i * i + (y - 1) * (y - 1) - d)});
  }
  cout << ans;
  return 0;
}
