#include<bits/stdc++.h>
#define int long long

using namespace std;
int n, hza[2005][2005], hzb[2005][2005], qza[2005][2005], qzb[2005][2005], ans;
string s[2005];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> s[i];
    s[i] = ' ' + s[i];
    for (int j = 1; j <= n; j++){
      qza[i][j] = qza[i - 1][j] + (s[i][j] == 'o');
      qzb[i][j] = qzb[i][j - 1] + (s[i][j] == 'o');
    }
  }
  for (int i = n; i >= 1; i--){
    for (int j = n; j >= 1; j--){
      hza[i][j] = hza[i + 1][j] + (s[i][j] == 'o');
      hzb[i][j] = hzb[i][j + 1] + (s[i][j] == 'o');
    }
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      if (s[i][j] != 'o'){
        continue;
      }
      ans += qza[i - 1][j] * (qzb[i][j - 1] + hzb[i][j + 1]);
      ans += hza[i + 1][j] * (qzb[i][j - 1] + hzb[i][j + 1]);
    }
  }
  cout << ans;
  return 0;
}
