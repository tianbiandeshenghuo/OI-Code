#include<bits/stdc++.h>

using namespace std;
int a, b;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> a >> b;
  if (a > b){
    cout << (a - b <= 3 ? "Yes" : "No");
  }else {
    cout << (b - a <= 2 ? "Yes" : "No");
  }
  return 0;
}