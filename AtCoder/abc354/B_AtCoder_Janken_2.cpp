#include <bits/stdc++.h>

using namespace std;
int n, t;
string s[105];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1, x; i <= n; i++){
    cin >> s[i] >> x;
    t += x;
  }
  sort(s + 1, s + n + 1);
  for (int i = 1; i <= n; i++){
    if (i == t % n + 1){
      cout << s[i];
      break;
    }
  }
  return 0;
}