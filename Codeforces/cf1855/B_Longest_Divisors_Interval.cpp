#include <bits/stdc++.h>

using namespace std;
void Solve(){
  long long n;
  cin >> n;
  string s(70, ' ');
  for (int i = 0; n; i++, n >>= 1){
    s[i] = (n & 1) + '0';
  }
  reverse(s.begin(), s.end());
  cout << s << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    Solve();
  }
  return 0;
}
