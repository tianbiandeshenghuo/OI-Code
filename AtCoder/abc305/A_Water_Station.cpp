#include<bits/stdc++.h>

using namespace std;
int n;
int main(){
  cin >> n;
  int x = n / 5;
  cout << (n - x * 5 < (x + 1) * 5 - n ? x * 5 : (x + 1) * 5);
  return 0;
}