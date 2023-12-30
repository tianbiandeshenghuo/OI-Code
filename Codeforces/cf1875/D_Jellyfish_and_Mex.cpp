#include<bits/stdc++.h>
#define int unsigned long long

using namespace std;
const int MAXM = 1e5 + 5;
int n, cnt[MAXM];
void Solve(){
  for (int i = 0; i < MAXM - 1; i++){
    cnt[i] = 0;
  }
  vector<int> a;
  cin >> n;
  int tmp = 0;
  for (int i = 1, x; i <= n; i++){
    cin >> x;
    if (x < MAXM){
      tmp++;
      a.push_back(x);
      cnt[x]++;
    }
  }
  n = tmp;
  int mex;
  for (mex = 0; cnt[mex]; mex++);
  if (mex == 0){
    cout << "0\n";
    return ;
  }
  int ans = ULLONG_MAX;
  for (int i = 0; i < n; i++){
    ans = min(ans, (cnt[a[i]] - 1) * mex + a[i] + (cnt[0] - 1) * a[i]);
    //cerr << a[i] << ' ' << (cnt[a[i]] - 1) * mex + a[i] << ' ' << (cnt[0] - 1) * a[i] << ' ' << (cnt[a[i]] == 1 ? a[i] : (cnt[a[i]] - 1) * mex + a[i]) + (cnt[0] - 1) * a[i] << '\n';
  }
  cout << ans << '\n';
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}
/*
0 1 2 0 1 2 0 3 -> 0 2 0 1 2 0 3 ->  2  2  3
mex: 1
ans: 4 + 1 + 2
*/