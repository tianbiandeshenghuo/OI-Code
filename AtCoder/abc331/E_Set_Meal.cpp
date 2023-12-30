#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 1e5 + 5;
int n, m, l;
struct bNode{
  int x, id;
  bool operator<(const bNode &i)const{
    return x > i.x;
  }
} a[MAXN], b[MAXN];
map<int, bool> c[MAXN];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m >> l;
  for (int i = 1; i <= n; i++){
    cin >> a[i].x;
    a[i].id = i;
  }
  for (int j = 1; j <= m; j++){
    cin >> b[j].x;
    b[j].id = j;
  }
  for (int i = 1; i <= l; i++){
    int x, y;
    cin >> x >> y;
    c[x][y] = 1;
  }
  sort(a + 1, a + n + 1);
  sort(b + 1, b + m + 1);
  int ans = -1;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
      if (!c[a[i].id].count(b[j].id)){
        ans = max(ans, a[i].x + b[j].x);
        break;
      }
    }
  }
  cout << ans;
  return 0;
}
