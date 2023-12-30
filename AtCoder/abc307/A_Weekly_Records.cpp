#include<bits/stdc++.h>

using namespace std;
int n;
int main(){
  cin >> n;
  for (int i = 1, ans = 0, x, cnt = 1; i <= n * 7; i++, cnt++){
    cin >> x;
    ans += x;
    if (cnt % 7 == 0){
      cnt = 0;
      cout << ans << ' ';
      ans = 0;
    }
  }
  return 0;
}