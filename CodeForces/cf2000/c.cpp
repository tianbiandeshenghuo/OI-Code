#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, m, a[MAXN];
void Solve(){
  cin >> n;
  map<int, vector<int>> mp;
  map<int, int> qwq;
  map<char, vector<int>> mp2;
  map<char, int> qwqwq;
  int cnt1 = 0, cnt2 = 0;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    if (!qwq.count(a[i])){
      qwq[a[i]]=++cnt1;
    }
    mp[qwq[a[i]]].push_back(i);
  }
  cin >> m;
  for (int i = 1; i <= m; i++){
    string s;
    cin >> s;
    if (s.size() != n){
      cout << "No\n";
      continue ;
    }
    mp2.clear();
    s = ' ' + s;
    qwqwq.clear();
    cnt2 = 0;
    for (int j = 1; j <= n; j++){
      if (!qwqwq.count(s[j])){
        qwqwq[s[j]] = ++cnt2;
      }
      mp2[qwqwq[s[j]]].push_back(j);
    }
    if (cnt1 != cnt2){
      cout << "no\n";
      continue;
    }
    bool f = 1;
    for (int i = 1; i <= cnt1; i++){
      if (mp2[i] != mp[i]){
        cout << "no\n";
        f = 0;
        break;
      }
    }
    if (f){
      cout << "yes\n";
    }
  }
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