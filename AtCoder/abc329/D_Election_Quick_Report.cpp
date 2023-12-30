#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, m, cnt[MAXN];
struct Node{
  int id, v;
  bool operator<(const Node &i)const{
    return v != i.v ? v < i.v : id > i.id;
  }
};
priority_queue<Node> b;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1, x; i <= m; i++){
    cin >> x;
    cnt[x]++;
    b.push({x, cnt[x]});
    cout << b.top().id << '\n';
  }
  
  return 0;
}