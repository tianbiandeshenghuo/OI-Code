#include<bits/stdc++.h>

using namespace std;
int lb(int x){
  return x & (-x);
}
int x;
void Solve(){
  cin >> x;
  vector<int> a;
  a.push_back(x);
  while (x != (1 << int(log2(x)))){
    x -= lb(x);
    a.push_back(x);
  }
  while (x != 1){
    x >>= 1;
    a.push_back(x);
  }
  cout << a.size() << '\n';
  for (auto v : a){
    cout << v << ' ';
  }
  cout << '\n';
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}