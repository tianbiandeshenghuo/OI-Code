#include<bits/stdc++.h>

using namespace std;
int n;
string s;
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> s;
  for (int i = 0; i < n - 2; i++){
    if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C'){
      cout << i + 1;
      return 0;
    }
  }
  cout << -1;
  return 0;
}