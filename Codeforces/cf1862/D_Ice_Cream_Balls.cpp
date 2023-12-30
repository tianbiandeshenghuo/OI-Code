#include<bits/stdc++.h>
#define int __int128

using namespace std;
const int MAXN = 2e5 + 5;
int read(){
  int cnt = 0;
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++){
    cnt = cnt * 10 + s[i] - '0';
  }
  return cnt;
}
void print(int x){
  if (x < 10){
    signed p = x;
    cout << p;
    return ;
  } 
  print(x / 10);
  signed p = x % 10;
  cout << p;
}
void Solve(){
  int n;
  n = read();
  int l = 0, r = 1e10, cnt = 2e18, p;
  while (l < r){
    int mid = (l + r) >> 1;
    if (mid * (mid - 1) / 2 <= n && n - mid * (mid - 1) / 2 <= cnt){
      cnt = n - mid * (mid - 1) / 2;
      p = mid;
    }
    if (mid * (mid - 1) / 2 < n){
      l = mid + 1;
    }else {
      r = mid;
    }
  }
  if (l * (l - 1) / 2 <= n && n - l * (l - 1) / 2 <= cnt){
    cnt = n - l * (l - 1) / 2;
    p = l;
  }
  print(p + cnt);
  cout << '\n';
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  t = read();
  while (t--){
    Solve();
  }
  return 0;
}