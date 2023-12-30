#include<bits/stdc++.h>

using namespace std;
int n, m;
string s[1005];
bool check(int x1, int x2, int y1, int y2){
  for (int i = 0; i <= 2; i++){
    for (int j = 0; j <= 2; j++){
      if (s[x1 + i][y1 + j] != '#' || s[x2 - i][y2 - j] != '#'){
        return 0;
      }
    }
  }

  return 1;
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  s[0] = s[n + 1] = s[n + 2] = s[n + 3] = s[n + 4] = s[n + 5] = "                                                                                                                                   ";
  for (int i = 1; i <= n; i++){
    cin >> s[i];
    s[i] = ' ' + s[i] + "                ";
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
      if (check(i, i + 8, j, j + 8)){
        cout << i << ' ' << j << '\n';
      }
    }
  }
  return 0;
}