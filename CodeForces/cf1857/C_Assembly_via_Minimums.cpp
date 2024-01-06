#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1e6 + 5;
int t, n, m, a[MAXN];
void Solve(){
  cin >> n;
  int x = n * (n - 1) / 2;
  int maxx = -1, cnt = 0;
  for (int i = 1; i <= x; i++){
    cin >> a[i];
    if (a[i] == maxx){
      cnt++, maxx = a[i];
    }else if (a[i] > maxx){
      cnt = 1, maxx = a[i];
    }
  }
  sort(a + 1, a + x + 1);
  int p = unique(a + 1, a + x + 1) - (a + 1);
  for (int i = 1; i <= n; i++){
    cout << a[i] << ' ';
    if (a[i] == maxx && cnt == 1 && i == p){
      a[i + 1] = a[i];
    }
  }
  cout << '\n';
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}