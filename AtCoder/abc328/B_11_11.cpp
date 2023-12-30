#include<bits/stdc++.h>

using namespace std;
int n, ans;
int check(int a, int b){
  bool vis[11] = {0};
  while (a){
    vis[a % 10] = 1;
    a /= 10;
  }
  while (b){
    vis[b % 10] = 1;
    b /= 10;
  }
  int q = 0;
  for (int i = 0; i <= 9; i++){
    q += vis[i];
  }
  return q == 1;
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    int x;
    cin >> x;
    for (int j = 1; j <= x; j++){
      ans += check(i, j);
    }
  }
  cout << ans;
  return 0;
}
