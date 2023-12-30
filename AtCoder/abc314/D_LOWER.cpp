#include<bits/stdc++.h>

using namespace std;
const int MAXN = 5e5 + 5;
int n, m, x, y;
string s;
int cg[MAXN];
int f = -1, op = -1;
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> s >> m;
  s = ' ' + s;
  for (int i = 1; i <= m; i++){
    int a, b;
    char p;
    cin >> a >> b >> p;
    if (a == 1){
      s[b] = p;
      cg[b] = i;
    }else if (a == 2){
      f = 0;
      op = i;
    }else {
      f = 1;
      op = i;
    }
  }
  for (int i = 1; i <= n; i++){
    if (cg[i] <= op){
      if (f && 'a' <= s[i] && s[i] <= 'z'){
        s[i] += 'A' - 'a';
      }else if (f == 0 && 'A' <= s[i] && s[i] <= 'Z'){
        s[i] += 'a' - 'A';
      }
    }
  }
  cout << s;
  return 0;
}