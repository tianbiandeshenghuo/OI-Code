#include<bits/stdc++.h>

using namespace std;
string a, b;
int n;
int main(){
  cin >> n >> a >> b;
  for (int i = 0; i < n; i++){
    if (!(a[i] == b[i] || (a[i] == '1' && b[i] == 'l') || (a[i] == 'l' && b[i] == '1') || (a[i] == '0' && b[i] == 'o') || (a[i] == 'o' && b[i] == '0'))){
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}