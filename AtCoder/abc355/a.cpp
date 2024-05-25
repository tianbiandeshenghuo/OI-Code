#include <bits/stdc++.h>

using namespace std;
int a, b;
int vis[4];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> a >> b;
  vis[a]++, vis[b]++;
  if (a == b){
    cout << -1;
    exit(0);
  }
  for (int i = 1; i <= 3; i++){
    if (!vis[i]){
      cout << i;
    }
  }
  return 0;
}