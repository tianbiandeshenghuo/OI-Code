#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1e3 + 5;
int n, m;
string s[MAXN];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    cin >> s[i];
    s[i] = ' ' + s[i];
  }
  int xmax = 0, ymax = 0, xmin = 9999, ymin = 9999;
  bool f = 1;
  for (int i = 1; i <= n && f; i++){
    for (int j = 1; j <= m && f; j++){
      if (s[i][j] == '#'){
        xmax = max(xmax, i);
        ymax = max(ymax, j);
        xmin = min(xmin, i);
        ymin = min(ymin, j);
      }
    }
  }
  cerr << xmax << ' ' << ymax << ' ' << xmin << ' ' << ymin;
  for (int i = xmin; i <= xmax; i++){
    for (int j = ymin; j <= ymax; j++){
      if (s[i][j] == '.'){
        cout << "No";
        return 0;
      }
    }
  }
  cout << "Yes";
  return 0;
}