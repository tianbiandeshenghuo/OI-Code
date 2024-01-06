#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, a, qq;
string s;
void Solve(){
  cin >> n >> a >> qq >> s;
  int x = a, y = a, p = 0, q = 0;
  for (int i = 0; i < qq; i++){
    p = max(p, x);
    q = max(q, y);
    if (s[i] == '+'){
      x++, y++;
    }else {
      x--;
    }
  }
  p = max(p, x);
  q = max(q, y);
  if (p == n){
    cout << "YES\n";
  }else if (q >= n){
    cout << "MAYBE\n";
  }else {
    cout << "NO\n";
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