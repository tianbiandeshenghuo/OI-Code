#include <bits/stdc++.h>

using namespace std;
vector<int> a;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int x;
  while (cin >> x){
    a.push_back(x);
  }
  while (a.size()){
    cout << a.back() << '\n';
    a.pop_back();
  }
  return 0;
}