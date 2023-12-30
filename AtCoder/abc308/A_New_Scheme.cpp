#include<bits/stdc++.h>

using namespace std;
int a[8];
int main(){
  for (int i = 0; i < 8; i++){
    cin >> a[i];
  }
  for (int i = 0; i < 8; i++){
    if (a[i] % 25 || !(100 <= a[i] && a[i] <= 675)){
      cout << "No";
      return 0;
    }else if (i >= 1 && a[i] < a[i - 1]){
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}