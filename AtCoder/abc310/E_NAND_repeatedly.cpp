#include<bits/stdc++.h>

using namespace std;
int n;
long long ans;
string s;
int last;
int check(int x, int y){
  return !(x && y);
}
int f(int x, int y){
  if (x == y){
    return s[x] - '0';
  }else {
    return check(last, s[y] - '0');
  }
}
int main(){
  ios::sync_with_stdio(0);
  cin >> n >> s;
  s = ' ' + s;
  for (int i = 1; i <= n; i++){
    for (int j = i; j <= n; j++){
      last = f(i, j);
      ans += last;
    }
  }
  cout << ans;
  return 0;
}