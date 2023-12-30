#include<bits/stdc++.h>

using namespace std;
int n, m, ans, x[105];
string q[105], p[105];
map<string, int> a, b;
int main(){
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    cin >> q[i];
  }
  for (int j = 1; j <= m; j++){
    cin >> p[j];
  }
  for (int i = 0; i <= m; i++){
    cin >> x[i];
    if (i >= 1){
      a[p[i]] = x[i];
    }
  }
  for (int j = 1; j <= n; j++){
    ans += a[q[j]] ? a[q[j]] : x[0];
  }
  cout << ans;
  return 0;
}