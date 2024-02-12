#include <bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5;
int n, dis[MAXN];
struct Node{
  int x, v;
  bool operator<(const Node &i)const{
    return v > i.v;
  }
};
vector<Node> a[MAXN];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i < n; i++){
    int A, B, x;
    cin >> A >> B >> x;
    a[i].push_back({i + 1, A});
    a[i].push_back({x, B});
  }
  for (int i = 2; i <= n; i++){
    dis[i] = 1e18;
  }
  priority_queue<Node> b;
  b.push({1, 0});
  while (b.size()){
    auto x = b.top();
    b.pop();
    if (x.v > dis[x.x]){
      continue;
    }
    for (auto v : a[x.x]){
      if (dis[v.x] > dis[x.x] + v.v){
        dis[v.x] = dis[x.x] + v.v;
        b.push({v.x, dis[v.x]});
      }
    }
  }
  cout << dis[n];
  return 0;
}