#include<bits/stdc++.h>

using namespace std;
int n, m;
string a, b;
bool checka(){
  for (int i = 0; i < n; i++){
    if (a[i] != b[i]){
      return 0;
    }
  }
  return 1;
}
bool checkb(){
  for (int i = m - 1, j = n - 1; j >= 0; i--, j--){
    if (a[j] != b[i]){
      return 0;
    }
  }
  return 1;
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m >> a >> b;
  int x = checka(), y = checkb();
  if (x && y){
    cout << 0;
  }else if (x && !y){
    cout << 1;
  }else if (y && !x){
    cout << 2;
  }else {
    cout << 3;
  }
  return 0;
}