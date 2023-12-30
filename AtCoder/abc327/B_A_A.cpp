#include<bits/stdc++.h>
#define int long long

using namespace std;
long long n;
unsigned int power(unsigned int a, unsigned int b){
  unsigned int cnt = 1;
  for (; b; b >>= 1, a *= a){
    if (b & 1){
      cnt *= a;
    }
  }
  return cnt;
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (long long i = 1; power(i, i) <= n; i++){
    if (power(i, i) == n){
      cout << i;
      return 0;
    }
  }
  cout << -1;
  return 0;
}