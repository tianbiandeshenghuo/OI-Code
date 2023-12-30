#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n;
bool vis[MAXN];
struct Node{
  int c;
  vector<int> p;
} a[MAXN];
vector<int> ans;
void dfs(int x){
  if (vis[x]){
    if (x == 1){
      for (auto v : ans){
        cout << v << ' ';
      }
      exit(0);
    }
    return ;
  }
  vis[x] = 1;
  for (auto v : a[x].p){
    dfs(v);
  }
  ans.push_back(x);
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1, x; i <= n; i++){
    cin >> a[i].c;
    for (int j = 1; j <= a[i].c; j++){
      cin >> x;
      a[i].p.push_back(x);
    }
  }
  dfs(1);
  ans.pop_back();
  for (auto v : ans){
    cout << v << ' ';
  }
  return 0;
}