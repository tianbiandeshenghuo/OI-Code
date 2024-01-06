#include<bits/stdc++.h>
#define int __int128

using namespace std;
const int MAXN = 1e4 + 5;
int n, a[MAXN];
int read(){
  string s;
  cin >> s;
  int cnt = 0;
  for (auto v : s){
    cnt = cnt * 10 + v - '0';
  }
  return cnt;
}
void print(int x, char s){
  if (x < 10){
    cout << signed(x) << s;
    return ;
  }
  print(x / 10, s);
  cout << signed(x % 10);
}
void Solve(){
  n = read();
  for (int i = 1; i <= n; i++){
    a[i] = read();
  }
  sort(a + 1, a + n + 1);
  int l = 1, r = 
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  t = read();
  //t = 1;
  while (t--){
    Solve();
  }
  return 0;
}