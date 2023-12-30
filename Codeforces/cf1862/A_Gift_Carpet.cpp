#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, m;
string s[25];
bool check(int a, int b, int c, int d){
  bool cnt[4] = {0};
  for (int i = 1; i <= n; i++){
    if (s[i][a] == 'v'){
      cnt[0] = 1;
    }
    if (s[i][b] == 'i'){
      cnt[1] = 1;
    }
    if (s[i][c] == 'k'){
      cnt[2] = 1;
    }
    if (s[i][d] == 'a'){
      cnt[3] = 1;
    }
  }
  return cnt[0] && cnt[1] && cnt[2] && cnt[3];
}
void Solve(){
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    cin >> s[i];
    s[i] = ' ' + s[i];
  }
  for (int i = 1; i <= m; i++){
    for (int j = i + 1; j <= m; j++){
      for (int k = j + 1; k <= m; k++){
        for (int p = k + 1; p <= m; p++){
          if (check(i, j, k, p)){
            cout << "YES\n";
            return ;
          }
        }
      }
    }
  }
  cout << "NO\n";
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}