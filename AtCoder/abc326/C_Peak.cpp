#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 3e5 + 5;
int n, m, a[MAXN];
int search(int x){
  int l = 1, r = n + 1;
  while (l < r){
    int mid = (l + r + 1) >> 1;
    if (a[mid] >= x){
      r = mid - 1;
    }else{
      l = mid;
    }
  }
  return l;
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  int ans = -1;
  for (int i = 1; i <= n; i++){
    auto y = search(a[i] + m);
    int p = (y == n + 1 ? n : y);
    ans = max(ans, p - i + 1);
  }
  cout << ans;
  return 0;
}
/*
0 495 503 1755647 1755648 1755649 100000007 998244353 998244853 1000000000
*/