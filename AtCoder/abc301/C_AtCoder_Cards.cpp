#include<bits/stdc++.h>

using namespace std;
string stdd = "atcoder@";
string a, b;
int len;
bool ck(char s){
  for (int i = 0; i < 8; i++){
    char t = stdd[i];
    if (s == t){
      return 1;
    }
  }
  return 0;
}
bool check(string x, string y){
  for (int i = 0; i < len; i++){
    if (x[i] != '@' && y[i] != '@' && x[i] != y[i]){
      return 0;
    }else if (x[i] == '@' && !ck(y[i])){
      return 0;
    }else if (y[i] == '@' && !ck(x[i])){
      return 0;
    }
  }
  return 1;
}
int main(){
  cin >> a >> b;
  len = a.size();
  if (check(a, b)){
    cout << "Yes";
    return 0;
  }
  map<char, int> _a, _b;
  for (int i = 0; i < len; i++){
    _a[a[i]]++, _b[b[i]]++;
  }
  int x = 0;
  for (char i = 'a'; i <= 'z'; i++){
    x += abs(_a[i] - _b[i]);
  }
  int y = _a['@'] + _b['@'];
  if (x > y){
    cout << "No";
    return 0;
  }
  for (char i = 'a'; i <= 'z'; i++){
    if (_a[i] != _b[i]){
      if (!ck(i)){
        cout << "No";
        return 0;
      }
    }
  }
  cout << "Yes";
  return 0;
}