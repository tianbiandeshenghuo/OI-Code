#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, a[MAXN];
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  vector<int> ans;
  ans.push_back(a[1]);
  for (int i = 2; i <= n; i++){
    if (a[i - 1] > a[i]){
      ans.push_back(a[i]);
    }
    ans.push_back(a[i]);
  }
  cout << ans.size() << '\n';
  for (auto v : ans){
    cout << v << ' ';
  }
  cout << '\n';
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}