#include<bits/stdc++.h>

using namespace std;
int n;
string s[105];
bool check(string s){
  int len = s.size();
  for (int i = 0, j = len - 1; i < j; i++, j--){
    if (s[i] != s[j]){
      return 0;
    }
  }
  return 1;
}
int main(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> s[i];
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      if (i == j){
        continue;
      }
      if (check(s[i] + s[j])){
        cout << "Yes";
        return 0;
      }
    }
  }
  cout << "No";
  return 0;
}