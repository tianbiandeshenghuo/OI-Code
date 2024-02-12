#include <bits/stdc++.h>
#define int long long

using namespace std;
int n, ans;
map<int, int> mp;
int dfs(int x){
  if (x < 2){
    return 0;
  }
  if (mp.count(x)){
    return mp[x];
  }
  return mp[x] = dfs(x / 2) + dfs((x + 1) / 2) + x;
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  cout << dfs(n);
  return 0;
}