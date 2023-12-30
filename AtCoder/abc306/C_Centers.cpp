#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1e5 + 5;
int n, a[3 * MAXN];
bool v[MAXN];
struct Node{
  int v = 1e9, id;
  bool operator<(const Node &i)const{
    return v < i.v;
  }
} ans[MAXN];
int main(){
  cin >> n;
  for (int i = 1; i <= 3 * n; i++){
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++){
    ans[i].id = i;
  }
  for (int i = 1; i <= 3 * n; i++){
    if (!v[a[i]]){
      v[a[i]] = 1;
    }else if (v[a[i]]){
      ans[a[i]].v = min(ans[a[i]].v, i);
    }
  }
  sort(ans + 1, ans + n + 1);
  for (int i = 1; i <= n; i++){
    cout << ans[i].id << ' ';
  }
  return 0;
}