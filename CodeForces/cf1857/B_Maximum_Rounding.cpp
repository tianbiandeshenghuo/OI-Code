#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int t, n, m, a[MAXN];
void Solve(){
  string n;
  cin >> n;
  int len = n.size();
  n = '0' + n;
  bool vis[MAXN] = {0};
  for (int i = len; i >= 1; i--){
    if (n[i] >= '5'){
      n[i - 1]++, n[i] = '0';
      vis[i] = 1;
    }
  }
  if (n[0] == '0'){
    bool flag = 0;
    for (int i = 1; i <= len; i++){
      cout << (flag ? '0' : n[i]);
      flag |= vis[i];
    }
  }else {
    bool flag = 0;
    for (int i = 0; i <= len; i++){
      cout << (flag ? '0' : n[i]);
      flag |= vis[i];
    }
  }
  cout << '\n';
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}