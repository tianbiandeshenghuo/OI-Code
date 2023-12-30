#include<bits/stdc++.h>

using namespace std;
int n, m, h, k;
string s;
map<int, map<int, int>> a;
int main(){
  cin >> n >> m >> h >> k;
  cin >> s;
  while (m--){
    int x, y;
    cin >> x >> y;
    a[x][y] = 1;
  }
  int x = 0, y = 0;
  for (int i = 0; i < n; i++){
    if (s[i] == 'U'){
      y++;
    }else if (s[i] == 'D'){
      y--;
    }else if (s[i] == 'R'){
      x++;
    }else if (s[i] == 'L'){
      x--;
    }
    h--;
    if (h < 0){
      cout << "No";
      return 0;
    }
    if (a[x][y] && h < k){
      a[x][y] = 0;
      h = k;
    }
    
  }
  cout << "Yes";
  return 0;
}