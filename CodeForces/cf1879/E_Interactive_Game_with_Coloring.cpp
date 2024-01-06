#include<bits/stdc++.h>

using namespace std;
const long long Mod = 1e18 + 9;
int n;
struct bNode{
  long long x, fac;
} hsh[105];
struct Node{
  int v, c;
};
vector<Node> a[105];
void dfs(int x, int fa){
  for (auto v : a[x]){
    if (v.v != fa){
      dfs(v.v, x);
    }else {
      hsh[x].fac = v.c;
    }
    hsh[x].x = (hsh[x].x * n + v.c) % Mod;
  }
}
int main(){
  cin >> n;
  for (int i = 2, x; i <= n; i++){
    cin >> x;
    a[x].push_back({i, i - 1});
    a[i].push_back({x, i - 1});
  }
  dfs(1, 0);
  cout << n - 1 << endl;
  for (int i = 1; i < n; i++){
    cout << i << ' ';
  }
  cout << endl;
  int id;
  cin >> id;
  vector<int> b(n + 1);
  while (!id){
    long long p = 0;
    for (int i = 1; i < n; i++){
      cin >> b[i];
      if (b[i]){
        p = (p * n + i) % Mod;
      }
    }
    if (b[1]){
      cout << 1 << endl;
      cin >> id;
      continue ;
    }
    for (int i = 1; i <= n; i++){
      if (hsh[i].x == p){
        cout << hsh[i].fac << endl;
        break;
      }
    }
    cin >> id;
  }
  return 0;
}