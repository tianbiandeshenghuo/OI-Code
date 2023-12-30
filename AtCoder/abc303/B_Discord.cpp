#include<bits/stdc++.h>

using namespace std;
int n, m, a[55][55], ans;
bool v[55][55];
int main(){
  cin >> n >> m;
  for (int i = 1; i <= m; i++){
    for (int j = 1; j <= n; j++){
      cin >> a[j][i];
    }
  }
  for (int i = 1; i <= m; i++){
    for (int j = 1; j <= n; j++){
      v[a[j][i]][a[j + 1][i]] = v[a[j + 1][i]][a[j][i]] = 1;
    }
  }
  for (int i = 1; i <= n; i++){
    for (int j = i + 1; j <= n; j++){
      ans += !v[i][j];
    }
  }
  cout << ans;
  return 0;
}