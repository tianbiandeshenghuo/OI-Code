#include<bits/stdc++.h>

using namespace std;
int a, b;
int main(){
  cin >> a >> b;
  if (a > b){
    swap(a, b);
  }
  if (abs(a - b) == 1){
    if (a == 3 || a == 6 || a == 9){
      cout << "No";
    }else {
      cout << "Yes";
    }
  }else {
    cout << "No";
  }
  return 0;
}