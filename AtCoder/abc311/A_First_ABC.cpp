#include<bits/stdc++.h>

using namespace std;
int n;
string s;
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> s;
  int a = 0, b = 0, c = 0;
  for (int i = 0; i < n; i++){
    a += s[i] == 'A', b += s[i] == 'B', c += s[i] == 'C';
    if (a && b && c){
      cout << i + 1;
      return 0;
    }
  }
  return 0;
}