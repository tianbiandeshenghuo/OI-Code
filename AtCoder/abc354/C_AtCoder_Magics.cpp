#include <bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
map<int, bool> tr;
int n;
struct Node{
  int a, c, id;
  bool operator<(const Node &i)const{
    return a == i.a ? c < i.c : a > i.a;
  }
}a[MAXN];
#define lb(x) x & -x
bool find(int x){
  for (; x; x -= lb(x)){
    if (tr[x]){
      return 1;
    }
  }
  return 0;
}
void add(int x){
  for (; x <= 1e9; x += lb(x)){
    tr[x] = 1;
  }
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i].a >> a[i].c;
    a[i].id = i;
  }
  sort(a + 1, a + n + 1);
  set<int> ans;
  for (int i = 1; i <= n; i++){
    if (find(a[i].c)){
      continue;
    }
    ans.insert(a[i].id);
    add(a[i].c);
  }
  cout << ans.size() << '\n';
  for (auto v : ans){
    cout << v << ' ';
  }
  return 0;
}