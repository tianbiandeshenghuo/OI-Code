#include<bits/stdc++.h>
#define int long long

using namespace std;
int n;
map<int, int> p;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    int a, b;
    cin >> a >> b;
    p[a] += b % 2;
    p[a * 2] += b / 2;
  }
  for (auto &v : p){
    p[v.first * 2] += v.second / 2;
    v.second %= 2;
  }
  long long ans = 0;
  for (auto v : p){
    ans += v.second;
  }
  cout << ans;
  return 0;
}