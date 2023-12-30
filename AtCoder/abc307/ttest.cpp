#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n;
string s;
vector<int> a;
bool v[MAXN];
int main(){
  //freopen("t.in", "r", stdin);
  int qwq = clock();
  cin >> n >> s;
  int cnta = 0, cntb = 0;
  for (int l = 0, r = 0; l <= r && r < n; ){
    cnta += s[r] == '(';
    cntb += s[r] == ')';
    while (cnta < cntb || cnta == 0){
      r++;
      cnta += s[r] == '(';
      cntb += s[r] == ')';
    }cout << l << ' ' << r << ' ' << cnta << ' ' << cntb << '\n';
    while (cnta > cntb){
      cnta += s[l] == '(';
      cntb += s[l] == ')';
      r++;
    }cout << l << ' ' << r << ' ' << cnta << ' ' << cntb << '\n';
    if (cnta == cntb && cnta && cntb){
      for (int i = l; i <= r; i++){
        v[i] = 1;
      }
      cout << l << ' ' << r << '\n';
      cnta = cntb = 0;
      l = r = r + 1;
    }
    
  }
  for (int i = 0; i < n; i++){
    if (!v[i]){
      cout << s[i];
    }
  }
  
  return 0;
}