#include<bits/stdc++.h>

using namespace std;
int n, d, fa[2005];
bool v[2005];
struct Node{
  int x, y;
} a[2005];
double len(int _x, int _y){
  Node x = a[_x], y = a[_y];
  int q = x.x - y.x, p = x.y - y.y;
  q *= q, p *= p;
  return sqrt(q + p);
}
int find(int x){
  if (x == fa[x]){
    return x;
  }
  return fa[x] = find(fa[x]);
}
int main(){
  cin >> n >> d;
  for (int i = 1; i <= n; i++){
    cin >> a[i].x >> a[i].y;
    fa[i] = i;
  }
  for (int i = 1; i <= n; i++){
    for (int j = i + 1; j <= n; j++){
      if (len(i, j) <= d){
        int x = find(i), y = find(j);
        if (x != y){
          fa[x] = y;
        }
      }
    }
  }
  for (int i = 1; i <= n; i++){
    fa[i] = find(fa[i]);
  }
  for (int i = 1; i <= n; i++){
    cout << (fa[i] == fa[1] ? "Yes\n" : "No\n");
  }
  return 0;
}