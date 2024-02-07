#include<bits/stdc++.h>

using namespace std;
int n;
string s;
void Solve(){
  cin >> n >> s;
  s = ' ' + s;
  int bg = 0, ed = 0;
  for (int i = 1; i <= n; i++){
    if (s[i] == 'B'){
      bg = i;
      break;
    }
  }
  for (int j = n; j >= 1; j--){
    if (s[j] == 'B'){
      ed = j;
      break;
    }
  }
  cout << ed - bg + 1 << '\n';
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}