#include<iostream>

using namespace std;
int n, a[105][105], sum = 1, x = 1, y = 1;///x, y表示当前走到x行y列
int main(){
  cin >> n;
  a[x][y] = 1;
  while(sum < n * n){
    while(!a[x][y + 1] && y + 1 <= n){///没越界且没走过，就一直向右走
      sum++;
      a[x][y + 1] = sum;

      y++;
    }
    while(!a[x + 1][y] && x + 1 <= n){///没越界且没走过，就一直向下走
      sum++;
      a[x + 1][y] = sum;

      x++;
    }
    while(!a[x][y - 1] && y - 1 >= 1){///没越界且没走过，就一直向左走
      sum++;
      a[x][y - 1] = sum;

      y--;
    }
    while(!a[x - 1][y] && x - 1 >= 1){///没越界且没走过，就一直向上走
      sum++;
      a[x - 1][y] = sum;
      x--;
    }
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      if (i == (n + 1) / 2 && j == (n + 1) / 2){
        cout << "T ";
        continue;
      }
      cout << a[i][j] << " \n"[j == n];
    }
  }
  return 0;
}
