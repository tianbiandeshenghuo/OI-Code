#include<bits/stdc++.h>
#define int long long

using namespace std;
int n, s, k, ans;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> s >> k;
  for (int i = 1, a, b; i <= n; i++){
    cin >> a >> b;
    ans += a * b;
  }
  cout << (ans < s ? ans + k : ans);
  return 0;
}
