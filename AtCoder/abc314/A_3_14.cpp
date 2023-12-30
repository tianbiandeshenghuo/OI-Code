#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n;
string s = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 0; i < n + 2; i++){
    cout << s[i];
  }
  return 0;
}