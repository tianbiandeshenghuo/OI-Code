#include<bits/stdc++.h>
#define int long long

using namespace std;
int n, k, p;
struct bNode{
  int a[10], c;
  bool operator<(const bNode &i)const{
    return c < i.c;
  }
}a[105];
struct Node{
  int p, a[10];
}dp[105];
Node NP(int id, int to){
  Node tmp = dp[id];
  tmp.p += a[to].c;
  for (int i = 1; i <= k; i++){
    tmp.a[i] += a[to].a[i];
  }
  return tmp;
}
bool check(Node a, Node b){
  if (a.p > b.p){
    return 0;
  }
  bool flag = 0;
  for (int i = 1; i <= k; i++){
    if (a.a[i] > b.a[i]){
      flag = 1;
    }
  }
  return flag;
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> k >> p;
  for (int i = 1; i <= n; i++){
    cin >> a[i].c;
    for (int j = 1; j <= k; j++){
      cin >> a[i].a[j];
    }
    dp[i].p = 1e18;
  }
  sort(a + 1, a + n + 1);
  for (int i = 1; i <= n + 1; i++){
    for (int j = 1; j < i; j++){
      auto tmp = NP(j, i);
      if (check(tmp, dp[i])){
        dp[i] = tmp;
      }
    }
  }
  cout << (dp[n + 1].p == 1e18 ? -1 : dp[n + 1].p);
  return 0;
}