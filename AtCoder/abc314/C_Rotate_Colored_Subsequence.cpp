#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, m, a[MAXN];
string s;
vector<int> b[MAXN];
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  cin >> s;
  s = ' ' + s;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    b[a[i]].push_back(i);
  }
  for (int i = 1; i <= m; i++){
    char p = s[b[i][b[i].size() - 1]];
    for (int j = b[i].size() - 1; j >= 1; j--){
      s[b[i][j]] = s[b[i][j - 1]];
    }
    s[b[i][0]] = p;
  }
  cout << s;
  return 0;
}
/*
a p z b q r c s
1 2 3 1 2 2 1 2
p q r s
s p q r
*/