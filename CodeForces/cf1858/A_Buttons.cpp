#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
//int n, m, a[MAXN];
void Solve(){
  int a, b, c;
  cin >> a >> b >> c;
  if (c % 2){
    if (a >= b){
      cout << "First\n";
    }else {
      cout << "Second\n";
    }
  }else {
    if (a <= b){
      cout << "Second\n";
    }else {
      cout << "First\n";
    }
  }
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
/*
2 1 2

*/