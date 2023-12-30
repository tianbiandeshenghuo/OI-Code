#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int t, n, k, a[MAXN];
void Solve(){
  cin >> n >> k;
  int cnt = 0;
  vector<int> b;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    cnt += a[i] == a[1];
    if (cnt % k == 0){
      b.push_back(i + 1);
    }
  }
  if (a[1] == a[n] && cnt >= k){
    cout << "YES\n";
    return ;
  }
  int vis[MAXN] = {0};
  for (auto v : b){
    for (int j = v; j <= n; j++){
      vis[a[j]]++;
    }
    for (int j = v; j <= n; j++){
      if (vis[a[j]] >= k){
        cout << "YES\n";
        return ;
      }
    }
  }
  cout << "NO\n";
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}