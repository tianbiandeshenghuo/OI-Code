#include<bits/stdc++.h>

using namespace std;
int a;
bool check(int x){
  int a = x % 10;
  x /= 10;
  int b = x % 10;
  x /= 10;
  return x * b == a;
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> a;
  while (!check(a)){
    a++;
  }
  cout << a;
  return 0;
}