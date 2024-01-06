#include<bits/stdc++.h>

using namespace std;
const int MAXN = 3e5 + 5;
int t, n, k, ans[MAXN];
struct Node{
  int p, id;
  bool operator<(const Node &i)const{
    return (p == i.p ? id > i.id : p < i.p);
  }
};
void Solve(){
  priority_queue<Node> a;
  int cnt = 0;
  cin >> n >> k;
  for (int i = 1; i <= n; i++){
    int x;
    cin >> x;
    x %= k;
    if (x){
      a.push({x, i});
    }else {
      ans[++cnt] = i;
    }
  }
  while (a.size()){
    auto x = a.top();
    a.pop();
    x.p -= k;
    if (x.p <= 0){
      ans[++cnt] = x.id;
    }else {
      a.push(x);
    }
  }
  for (int i = 1; i <= cnt; i++){
    cout << ans[i] << " \n"[i == cnt];
  }
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}