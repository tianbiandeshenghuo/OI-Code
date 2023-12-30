#include<bits/stdc++.h>

using namespace std;
const int MAXN = 3e5 + 5;
int n, m, qz[MAXN];
string s;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m >> s;
  s = ' ' + s;
  for (int i = 1; i < n; i++){
    qz[i] = qz[i - 1] + (s[i] == s[i + 1]);
  }
  while (m--){
    int l, r;
    cin >> l >> r;
    cout << qz[r - 1] - qz[l - 1] << '\n';
  }
  return 0;
}
