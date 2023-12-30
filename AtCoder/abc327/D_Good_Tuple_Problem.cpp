#include<bits/stdc++.h>

using namespace std;
const int MAXN = 4e5 + 5;
int n, m, a[MAXN], b[MAXN], fa[MAXN];
int find(int x){
  return x == fa[x] ? x : fa[x] = find(fa[x]);
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= n * 2; i++){
    fa[i] = i;
  }
  for (int i = 1; i <= m; i++){
    cin >> a[i];
  }
  for (int i = 1; i <= m; i++){
    cin >> b[i];
    fa[find(a[i])] = find(b[i] + n);
    fa[find(b[i])] = find(a[i] + n);
  }
  for (int i = 1; i <= n; i++){
    if (find(i) == find(i + n)){
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}
/*
1:3 5
2:6 7 4 3
3:1 2
4:2
5:1
6:2
7:2
*/
/*
0 0 1 1 1 1
*/