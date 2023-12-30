#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e3 + 5;
int n, m;
int fx[2][4] = {{1, -1, 0, 0}, {0, 0, 1, -1}};
bool vis[MAXN][MAXN];
int dis[MAXN][MAXN];
string s[MAXN];
struct Node{
  int x, y;
};
queue<Node> a;
void jl(int x, int y, int l){
  if (dis[x][y]){
    return ;
  }
  a.push({x, y});
  dis[x][y] = l;
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  int bx, by, ex, ey;
  for (int i = 1; i <= n; i++){
    cin >> s[i];
    s[i] = ' ' + s[i];
    for (int j = 1; j <= m; j++){
      if (s[i][j] == 'S'){
        bx = i, by = j;
      }else if (s[i][j] == 'G'){
        ex = i, ey = j;
      }else if (s[i][j] != '.'){
        vis[i][j] = 1;
      }
    }
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
      if (s[i][j] == '<'){
        int tmp = j - 1;
        while (tmp >= 1 && s[i][tmp] == '.'){
          vis[i][tmp] = 1;
          tmp--;
        }
      }else if (s[i][j] == '>'){
        int tmp = j + 1;
        while (tmp <= m && s[i][tmp] == '.'){
          vis[i][tmp] = 1;
          tmp++;
        }
      }else if (s[i][j] == '^'){
        int tmp = i - 1;
        while (tmp >= 1 && s[tmp][j] == '.'){
          vis[tmp][j] = 1;
          tmp--;
        }
      }else if (s[i][j] == 'v'){
        int tmp = i + 1;
        while (tmp <= n && s[tmp][j] == '.'){
          vis[tmp][j] = 1;
          tmp++;
        }
      }
    }
  }
  jl(bx, by, 1);
  while (a.size()){
    auto x = a.front();
    a.pop();
    vis[x.x][x.y] = 1;
    for (int i = 0; i < 4; i++){
      int dx = x.x + fx[0][i], dy = x.y + fx[1][i];
      if (dx >= 1 && dy >= 1 && dx <= n && dy <= m && vis[dx][dy] == 0){
        jl(dx, dy, dis[x.x][x.y] + 1);
      }
    }
  }
  cout << dis[ex][ey] - 1;
  return 0;
}