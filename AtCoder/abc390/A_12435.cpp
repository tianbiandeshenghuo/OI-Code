#include<bits/stdc++.h>

using namespace std;
int a[6];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  for (int i = 1; i <= 5; i++){
    cin >> a[i];
  }
  int cnt = 0;
  for (int i = 2; i <= 5; i++){
    cnt += (a[i] < a[i - 1]);
    if (a[i] < a[i - 1]){
      swap(a[i], a[i - 1]);
    }
  }
  cout << (cnt == 1 ? "Yes" : "No");
  return 0;
}