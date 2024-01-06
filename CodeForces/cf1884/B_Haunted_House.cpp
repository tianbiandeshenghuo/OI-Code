#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 1e5 + 5;
int n;
string s;
void Solve(){
  vector<int> zero;
  cin >> n >> s;
  s = ' ' + s;
  for (int i = 1; i <= n; i++){
    if (s[i] == '0'){
      zero.push_back(i);
    }
  }
  if (!zero.size()){
    for (int i = 1; i <= n; i++){
      cout << "-1 ";
    }
    cout << '\n';
    return ;
  }
  bool f = 0;
  int ans = 0;
  for (int i = n; i >= 1; i--){
    if (!zero.size()){
      cout << "-1 ";
      continue;
    }
    ans += i - zero.back();
    zero.pop_back();
    cout << ans << ' ';
  }
  cout << '\n';
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