#include<bits/stdc++.h>

using namespace std;
bool vis[105][105];
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n;
  cin >> n;
  for (int p = 1; p <= n; p++){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i = a + 1; i <= b; i++){
      for (int j = c + 1; j <= d; j++){
        vis[i][j] = 1;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i <= 100; i++){
    for (int j = 0; j <= 100; j++){
      ans += vis[i][j];
    }
  }
  cout << ans;
  return 0;
}