#include<bits/stdc++.h>

using namespace std;
int n, p, q, a[105];
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> p >> q;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  cout << min(p, q + a[1]);
  return 0;
}