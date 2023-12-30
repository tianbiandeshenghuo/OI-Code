#include<bits/stdc++.h>

using namespace std;
int h, w, a[10][10], b[10][10];
bool check(){
  for (int i = 1; i <= h; i++){
    for (int j = 1; j <= w; j++){
      if (a[i][j] != b[i][j]){
        return 0;
      }
    }
  }
  return 1;
}
void dfs(int x, int y, int p){
  cerr << x << ' ' << y << ' ' << p << '\n';
  for (int i = 1; i <= h; i++){
    for (int j = 1; j <= w; j++){
      cerr << a[i][j] << " \n"[j == w];
    }
  }
  cerr << '\n';
  if (check()){
    cout << p - x - y << '\n';
    exit(0);
  }
  if (x){
    for (int i = 1; i <= h; i++){
      for (int j = i + 1; j <= h; j++){
        for (int k = 1; k <= w; k++){
          swap(a[i][k], a[j][k]);
        }
        dfs(x - 1, y, p);
        for (int k = 1; k <= w; k++){
          swap(a[i][k], a[j][k]);
        }
      }
    }
  }
  if (y){
    for (int i = 1; i <= w; i++){
      for (int j = i + 1; j <= w; j++){
        for (int k = 1; k <= h; k++){
          swap(a[k][i], a[k][j]);
        }
        dfs(x, y - 1, p);
        for (int k = 1; k <= h; k++){
          swap(a[k][i], a[k][j]);
        }
      }
    }
  }
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> h >> w;
  for (int i = 1; i <= h; i++){
    for (int j = 1; j <= w; j++){
      cin >> a[i][j];
    }
  }
  for (int i = 1; i <= h; i++){
    for (int j = 1; j <= w; j++){
      cin >> b[i][j];
    }
  }
  for (int i = 0; i <= 10; i++){
    for (int j = 0; j <= 10; j++){
      dfs(i, j, i + j);
    }
  }
  cout << -1;
  return 0;
}
