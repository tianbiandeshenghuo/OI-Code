#include<bits/stdc++.h>

using namespace std;
int n, a[105];
int main(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for (int i = 1; i < n; i++){
    cout << a[i] << ' ';
    if (abs(a[i] - a[i + 1]) != 1){
      if (a[i] > a[i + 1]){
        for (int j = a[i] - 1; j > a[i + 1]; j--){
          cout << j << ' ';
        }
      }else {
        for (int j = a[i] + 1; j < a[i + 1]; j++){
          cout << j << ' ';
        }
      }
    }
  }
  cout << a[n];
  return 0;
}