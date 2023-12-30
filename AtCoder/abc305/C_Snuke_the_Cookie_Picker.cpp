#include<bits/stdc++.h>

using namespace std;
int n, m, fx[2][4] = {{1, -1, 0, 0}, {0, 0, 1, -1}};
string s[505];
int main(){
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    cin >> s[i];
    s[i] = ' ' + s[i] + ' ';
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
      if (s[i][j] == '.'){
        int sum = 0;
        for (int k = 0; k < 4; k++){
          sum += s[i + fx[0][k]][j + fx[1][k]] == '#';
        }
        if (sum >= 2){
          cout << i << ' ' << j;
          return 0;
        }
      }
    }
  }
  return 0;
}