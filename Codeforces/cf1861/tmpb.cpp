#include<bits/stdc++.h>

using namespace std;
const int MAXN = 5e3 + 5;
string a, b;
int n;
bool vis[MAXN][MAXN] = {{0}};
void Solve(){
  cin >> a >> b;
  for (int i = 0; i <= n; i++){
    for (int j = 0; j <= n; j++){
      vis[i][j] = 0;
    }
  }
  n = a.size();
  a = ' ' + a, b = ' ' + b;
  if (a == b){
    cout << "YES\n";
    return ;
  }

  for (int i = 1, j = 1; i <= n; (i += j == n), (j = j == n ? i : j + 1)){
    if (i > j){
      continue;
    }
    if (a[i] == a[j] && b[i] == b[j] && a[i] == b[i]){
      vis[i][j] = 1;
    }
    vis[i][j] |= vis[i - 1][j];
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      vis[i][j] = vis[j][i] = max(vis[i][j], vis[j][i]);
      //cout << vis[i][j];
    }
    //cout << '\n';
  }
  int ll = 0, lr = 0;
  for (int i = 1; i <= n; i++){
    if (a[i] != b[i]){
      //cout << i << '\n';
      bool flag = 1;
      for (int l = i - 1; l > lr && flag; l--){
        for (int r = n; flag && r >= l; r--){
          //cout << l << ' ' << r << ' ' << ll << ' ' << lr << ' ' << vis[l][r] << ' ';
          if (vis[l][r]){
            ll = l, lr = r;
            i = lr;
            //cout << l << ' ' << r << ' ' << lr << '\n';
            flag = 0;
          }
          //cout << flag << '\n';
        }
      }
      //cerr << flag << '\n';
      if (flag){
        cout << "NO\n";
        return ;
      }
      //cerr << flag << ' ' << ll << ' ' << lr << '\n';
    }
  }
  cout << "YES\n";
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