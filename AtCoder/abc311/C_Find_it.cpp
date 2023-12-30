#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, bgin;
int dis[MAXN], rd[MAXN];
int a[MAXN];
vector<int> ans;
void dfs(int x){
  if (dis[x] == 1){
    int len = ans.size();
    vector<int> q;
    bool flag = 0;
    for (int i = 0; i < len; i++){
      if (ans[i] == x){
        flag = 1;
      }
      if (flag){
        q.push_back(ans[i]);
      }
      //cout << ans[i] << ' ';
    }
    cout << q.size() - 1 << '\n';
    for (int i = 0; i < q.size() - 1; i++){
      cout << q[i] << ' ';
    }
    exit(0);
  }else if (dis[x]){
    return ;
  }
  dis[x] = 1;
  ans.push_back(a[x]);
  dfs(a[x]);
  ans.pop_back();
  dis[x] = -1;
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    rd[a[i]]++;
  }
  ans.push_back(1);
  dfs(1);
  return 0;
}