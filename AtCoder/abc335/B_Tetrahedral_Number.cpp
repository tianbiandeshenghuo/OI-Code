#include<bits/stdc++.h>

using namespace std;
int n;
struct Node{
  int x, y, z;
  bool operator<(const Node &i)const{
    return (x < i.x) || (x == i.x && y < i.y) || (x == i.x && y == i.y && z < i.z);
  }
};
vector<Node> b;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 0; i <= n; i++){
    for (int j = 0; j <= n; j++){
      for (int k = 0; k <= n; k++){
        if (i + j + k <= n){
          b.push_back({i, j, k});
        }
      }
    }
  }
  sort(b.begin(), b.end());
  for (auto v : b){
    cout << v.x << ' ' << v.y << ' ' << v.z << '\n';
  }
  return 0;
}