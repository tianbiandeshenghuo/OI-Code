#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, b[MAXN];
struct Node{
  int pre, nxt;
};
map<int, Node> a;
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> b[i];
    a[b[i]].nxt = a[b[i - 1]].nxt;
    a[b[i - 1]].nxt = b[i];
    a[b[i]].pre = b[i - 1];
  }
  int q;
  cin >> q;
  while(q--){
    int id, x, y;
    cin >> id >> x;
    if (id == 1){
      cin >> y;
      a[y].nxt = a[x].nxt;
      a[a[x].nxt].pre = y;
      a[x].nxt = y;
    }else {
      a[a[x].pre].nxt = a[x].nxt;
      a[a[x].nxt].pre = a[x].pre;
    }
  }
  bool f = 1;
  for (int i = 0; i || f; i = a[i].nxt){
    f = 0;
    if (i){
      cout << i << ' ';
    }
  }
  return 0;
}