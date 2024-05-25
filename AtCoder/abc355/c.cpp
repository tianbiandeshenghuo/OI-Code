#include <bits/stdc++.h>

using namespace std;
const int MAXN = 2e3 + 5;
int n, t, a[MAXN][MAXN];
int l[MAXN], r[MAXN], lt, rt;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> t;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      a[i][j] = n * (i - 1) + j;
    }
  }
  for (int i = 1; i <= t; i++){
    int x;
    cin >> x;
    int X = 1;
    while (x > n){
      X++, x -= n;
    }
    int Y = x;
    l[X]++, r[Y]++;
    if (X == Y){
      lt++;
    }
    if (X + Y - 1 == n){
      rt++;
    }
    if (l[X] == n || r[Y] == n || lt == n || rt == n){
      cout << i;
      exit(0);
    }
  }
  cout << -1;
  return 0;
}