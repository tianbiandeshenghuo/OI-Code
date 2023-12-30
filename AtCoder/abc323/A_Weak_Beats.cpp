#include<bits/stdc++.h>

using namespace std;
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string s;
  cin >> s;
  for (int i = 1; i < s.size(); i += 2){
    if (s[i] == '1'){
      cout << "No";
      exit(0);
    }
  }
  cout << "Yes";
	return 0;
}