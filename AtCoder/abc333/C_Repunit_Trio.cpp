#include<bits/stdc++.h>
#define int long long

using namespace std;
int n;
set<int> a;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  while (a.size() < n){
    for (int i = 1; i <= 112222222233; i = i * 10 + 1){
      for (int j = 1; j <= 112222222233; j = j * 10 + 1){
        for (int k = 1; k <= 112222222233; k = k * 10 + 1){
          a.insert(i + j + k);
        }
      }
    }
  }
  auto x = a.begin();
  n--;
  while (n--){
    x++;
  }
  cout << *x;
  return 0;
}