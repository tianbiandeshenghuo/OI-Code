#include<bits/stdc++.h>

using namespace std;
string s;
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> s;
  cout << (s == "ACE" || s == "BDF" || s == "CEG" || s == "DFA" || s == "EGB" || s == "FAC" || s == "GBD" ? "Yes" : "No");
  return 0;
}