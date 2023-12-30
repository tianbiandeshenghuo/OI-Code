#include<bits/stdc++.h>

using namespace std;

void Solve(){
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b){
    swap(a, b);
  }
  if (a > c){
    swap(a, c);
  }
  if (b > c){
    swap(b, c);
  }
  int cnt = 0;
  while (b != a){
    b -= a;
    cnt++;
    if (cnt > 3){
      cout << "NO\n";
      return ;
    }
  }
  while (c != a){
    c -= a;
    cnt++;
    if (cnt > 3){
      cout << "NO\n";
      return ;
    }
  }
  cout << "YES\n";
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  //t = 1;
  while (t--){
    Solve();
  }
  return 0;
}