#include<bits/stdc++.h>
#define int __int128

using namespace std;
int read(){
  string s;
  int cnt = 0, f = 1;
  cin >> s;
  if (s[0] == '-'){
    f = -1;
    s[0] = '0';
  }
  for (auto v : s){
    cnt = cnt * 10 + v - '0';
  }
  return cnt * f;
}
void print(int x){
  if (x < 0){
    cout << '-';
    x = -x;
  }
  if (x < 10){
    cout << signed(x);
    return ;
  }
  print(x / 10);
  cout << signed(x % 10);
}
int a = read(), m = read(), l = read(), r = read();
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  l -= a;
  r -= a;
  print(abs(r) / m - (l - 1) / m + (r % m == 0 || l % m == 0));
  return 0;
}