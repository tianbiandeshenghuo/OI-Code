#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int t, n;
struct Node{
  int x, id;
  bool operator<(const Node &i)const{
    return x < i.x;
  }
} a[MAXN], b[MAXN];
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i].x;
    a[i].id = i;
    b[i] = a[i];
  }
  sort(a + 1, a + n + 1);
  bool flag = 1;
  for (int i = 1; i <= n && flag; i++){
    if (a[i].x % 2 == b[i].x % 2){
      swap(b[i], b[a[i].id]);
    }else {
      flag = 0;
    }
  }
  cout << (flag ? "YES\n" : "NO\n");
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}