#include<bits/stdc++.h>

using namespace std;
int a[15][15];
bool check(int x, int y, int dx, int dy){
  int p[15] = {};
  for (int i = x; i <= dx; i++){
    for (int j = y; j <= dy; j++){
      p[a[i][j]] = 1;
    }
  }
  for (int i = 1; i <= 9; i++){
    if (!p[i]){
      return 1;
    }
  }
  return 0;
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  for (int i = 1; i <= 9; i++){
    for (int j = 1; j <= 9; j++){
      cin >> a[i][j];
    }
  }
  for (int i = 1; i <= 9; i++){
    if (check(i, 1, i, 9) || check(1, i, 9, i)){
      cout << "No";
      return 0;
    }
  }
  for (int i = 1; i + 2 <= 9; i += 3){
    for (int j = 1; j + 2 <= 9; j += 3){
      if (check(i, j, i + 2, j + 2)){
        cout << "No";
        return 0;
      }
    }
  }
  cout << "Yes";
  return 0;
}
