#include<bits/stdc++.h>
#define int long long

using namespace std;

void Solve(){
  int n, k, cnt = 1;
  cin >> n >> k;
  while (n--){
    int x;
    cin >> x;
    cnt *= x;
  }
  if (2023 % cnt == 0){
    cout << "Yes\n";
    cout << 2023 / cnt << ' ';
    for (int i = 1; i < k; i++){
      cout << 1 << ' ';
    }
    cout << '\n';
  }else {
    cout << "NO\n";
  }
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}
