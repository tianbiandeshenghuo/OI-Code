#include<bits/stdc++.h>

using namespace std;
string s;
__int128 n;
__int128 ans = -1;
__int128 len;
__int128 read(){
  __int128 x = 0;
  char s;
  while (cin >> s){
    x = x * 10 + s - '0';
  }
  return x;
}
void print(__int128 x){
  if (!x){
    return ;
  }
  if (x < 0){
    cout << '-';
    print(-x);
  }else {
    print(x / 10);
    char a = x % 10 + '0';
    cout << a;
  }
}
void dfs(int x, __int128 op, __int128 cnt){
  if (cnt > n){
    return ;
  }
  if (x == len + 1){
    if (!cnt){
      cout << 0;
    }
    print(cnt);
    exit(0);
  }
  if (s[x] == '?'){
    dfs(x + 1, op / 2, cnt + op);
    dfs(x + 1, op / 2, cnt);
  }else {
    dfs(x + 1, op / 2, cnt + op * (s[x] - '0'));
  }
}
int main(){
  cin >> s;
  n = read();
  len = s.size();
  s = ' ' + s;
  dfs(1, pow(2, len - 1), 0);
  if (!ans){
    cout << 0;
    return 0;
  }
  print(ans);
  return 0;
}
