#include<bits/stdc++.h>

using namespace std;
string s;
int pos;
void fz(){
  int n = s.size();
  for (int i = 0, j = n - 1; i < j; i++, j--){
    swap(s[i], s[j]);
  }
}
void Solve(){
  cin >> s >> pos;
  int n = s.size();
  string tm = s;
  sort(s.begin(), s.end());
  int m = n, tmp = pos;
  while (m < pos){
    tmp -= s.size();
    tm.erase(tm.find(s.back()), 1);
    s.pop_back();
    m += s.size();
  }
  tmp--;
  fz();
  cout << tm[tmp];
  //cerr << '\n';//cerr << s << ' ' << m << ' ' << pos << ' ' << tmp << '\n';
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}

/*
gfedcbafedcba 
*/

/*
abcdabcaba
*/

/*
qwesj qesj qej 
*/