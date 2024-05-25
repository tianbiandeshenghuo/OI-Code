#include <bits/stdc++.h>

using namespace std;
int h;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> h;
  int cnt = 0, tmp = 0;
  for (int i = 1; ; i *= 2){
    cnt += i;
    tmp++;
    if (cnt > h){
      cout << tmp;
      break;
    }
  }
  return 0;
}