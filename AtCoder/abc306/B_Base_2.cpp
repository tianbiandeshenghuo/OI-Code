#include<bits/stdc++.h>

using namespace std;
unsigned long long ans, cnt = 1;
int main(){
  for (int i = 1; i <= 64; i++){
    long long x;
    cin >> x;
    ans += x * cnt;
    cnt *= 2;
  }
  cout << ans;
  return 0;
}