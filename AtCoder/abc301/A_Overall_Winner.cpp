#include<bits/stdc++.h>

using namespace std;
int len, a, b;
string s;
int main(){
  cin >> len >> s;
  for (int i = 0; i < len; i++){
    s[i] == 'T' ? a++ : b++;
  }
  if (a > b){
    cout << 'T';
  }else if (a < b){
    cout << 'A';
  }else {
    int x = a;
    a = b = 0;
    for (int i = 0; i < len; i++){
      s[i] == 'T' ? a++ : b++;
      if (a == x){
        cout << 'T';
        return 0;
      }else if (b == x){
        cout << 'A';
        return 0;
      }
    }
  }
  return 0;
}