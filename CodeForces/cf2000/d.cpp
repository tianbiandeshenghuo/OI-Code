#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, a[MAXN], qz[MAXN];
string s;
bool cmp(int i, int j){
  return i > j;
}
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    qz[i] = qz[i - 1] + a[i];
  }
  cin >> s;
  s = ' ' + s;
  int l = n + 1, r = 0;
  for (int i = 1; i <= n; i++){
    if (s[i] == 'L'){
      l = min(l, i);
    }else {
      r = max(r, i);
    }
  }
  stack<int> st;
  int ans = 0;
  for (int i = 1; i <= n; i++){
    if (s[i] == 'L'){
      st.push(i);
    }else if (st.size()){
      if (i == r || (st.top() == l && i != r)){
        continue;
      }
      ans += qz[i] - qz[st.top() - 1];
      st.pop();
    }
  }
  cerr << l << ' ' << r << '\n';
  if (st.size() && st.top() == l){
    ans += qz[r] - qz[l - 1];
  }
  cout << ans << '\n';
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}