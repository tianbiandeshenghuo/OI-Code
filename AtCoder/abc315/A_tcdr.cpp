#include<bits/stdc++.h>

using namespace std;
string s;
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> s;
  for (int i = 0; i < s.size(); i++){
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){

    }else {
      cout << s[i];
    }
  }
  return 0;
}