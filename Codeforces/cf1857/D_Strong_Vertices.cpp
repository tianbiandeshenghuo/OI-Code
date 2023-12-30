#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int t, n, m, a[MAXN], b[MAXN];
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  int maxx = -1, cnt = 0;
  for (int j = 1; j <= n; j++){
    int i = j;
    cin >> b[i];
    if (a[i] - b[i] > maxx){
      maxx = a[i] - b[i], cnt = 1;
    }else if (a[i] - b[i] == maxx){
      cnt++;
    }
  }
  cout << cnt << '\n';
  for (int i = 1; i <= n; i++){
    if (a[i] - b[i] == maxx){
      cout << i << ' ';
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