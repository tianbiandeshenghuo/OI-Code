#include<bits/stdc++.h>

using namespace std;
string s;
int main(){
  cin >> s;
  int len = s.size();
  if (len < 3){
    cout << s;
    return 0;
  }
  for (int i = 0; i < 3; i++){
    cout << s[i];
  }
  for (int i = 3; i < len; i++){
    cout << 0;
  }
  return 0;
}