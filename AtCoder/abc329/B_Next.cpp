#include<bits/stdc++.h>

using namespace std;
int n;
set<int> b;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  while (n--){
    int x;
    cin >> x;
    b.insert(x);
  }
  auto p = b.end();
  p--;
  p--;
  cout << *p;
  return 0;
}

