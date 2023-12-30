#include<bits/stdc++.h>
#define int long long

using namespace std;
int n, a[35], ans;
string s;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> s;
  s = ' ' + s;
  for (int i = 1; i <= n; ){
    int cnt = 0, tmp = i;
    while (i <= n && s[i] == s[tmp]){
      i++, cnt++;
    }
    ans += max(0ll, cnt - a[s[tmp] - 'a']);
    a[s[tmp] - 'a'] = max(a[s[tmp] - 'a'], cnt);
  }
  cout << ans;
  return 0;
}

