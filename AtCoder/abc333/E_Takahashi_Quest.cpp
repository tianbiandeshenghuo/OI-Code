#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, cnt, ans[MAXN], dis[MAXN];
bool vis[MAXN];
struct Node{
  int x, y;
} a[MAXN];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i].x >> a[i].y;
  }
  for (int i = n; i >= 1; i--){
    if (a[i].x == 2){
      dis[a[i].y]++;
    }else if (a[i].x == 1){
      if (dis[a[i].y]){
        vis[i] = 1;
        dis[a[i].y]--;
      }
    }
  }
  for (int i = 1; i <= n; i++){
    if (dis[i]){
      cout << -1;
      return 0;
    }
  }
  multiset<int> b;
  for (int i = 1; i <= n; i++){
    if (vis[i]){
      b.insert(a[i].y);
    }else if (a[i].x == 2){
      if (b.find(a[i].y) != b.end()){
        b.erase(b.find(a[i].y));
      }
    }
    cnt = max(cnt, (int)b.size());
  }
  cout << cnt << '\n';
  for (int i = 1; i <= n; i++){
    if (a[i].x == 1){
      cout << vis[i] << ' ';
    }
  }
  return 0;
}
