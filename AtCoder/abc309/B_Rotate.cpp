#include<bits/stdc++.h>

using namespace std;
int n, a[105][105];
int main(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      char s;
      cin >> s;
      a[i][j] = s - '0';
    }
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      if (i == 1 && j == 1){
        cout << a[2][1];
      }else if (i == 1 && j == n){
        cout << a[1][n - 1];  
      }else if (i == n && j == n){
        cout << a[i - 1][j];
      }else if (i == n && j == 1){
        cout << a[i][j + 1];
      }else if (i == 1){
        cout << a[i][j - 1];
      }else if (j == 1){
        cout << a[i + 1][j];
      }else if (i == n){
        cout << a[i][j + 1];
      }else if (j == n){
        cout << a[i - 1][j];
      }else {
        cout << a[i][j];
      }
    }
    cout << '\n';
  }
  return 0;
}