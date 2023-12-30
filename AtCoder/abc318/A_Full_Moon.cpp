#include<bits/stdc++.h>

using namespace std;
int n, m, p;
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m >> p;
  int ans = 0;
  for (int i = m; i <= n; i += p){
    ans++;
  }
  cout << ans;
  return 0;
}