#include <bits/stdc++.h>

using namespace std;
int n, m, a[105], b[105];
int c[205];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    c[i] = a[i];
  }
  for (int i = 1; i <= m; i++){
    cin >> b[i];
    c[i + n] = b[i];
  }
  sort(c + 1, c + n + m + 1);
  for (int i = 1; i <= n + m; i++){
    cerr << c[i] << ' ';
  }
  sort(a + 1, a + n + 1);
  for (int i = 1; i < n + m; i++){
    for (int j = 1; j < n; j++){
      int x = c[i], y = c[i + 1];
      int X = a[j], Y = a[j + 1];
      if (x > y){
        swap(x, y);
      }
      if (X > Y){
        swap(X, Y);
      }
      if (x == X && y == Y){
        cout << "Yes";
        exit(0);
      }
    }
  }
  cout << "No";
  return 0;
}