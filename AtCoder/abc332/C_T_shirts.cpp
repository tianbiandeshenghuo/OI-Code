#include<bits/stdc++.h>

using namespace std;
int m, n, ans;
string s;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m >> s;
  s = s + '0';
  int a[2] = {0, 0};
  for (int i = 0; i <= n; i++){
    if (s[i] == '1'){
      a[1]++;
    }else if (s[i] == '2'){
      a[0]++;
    }else {
      ans = max(ans, max(0, a[1] - m) + a[0]);
      a[0] = a[1] = 0;
    }
  }
  cout << ans;
  return 0;
}
