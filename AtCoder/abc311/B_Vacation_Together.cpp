#include<bits/stdc++.h>

using namespace std;
int n, d;
string s[105];
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> d;
  for (int i = 1; i <= n; i++){
    cin >> s[i];
    s[i] = ' ' + s[i];
  }
  int cnt = 0, ans = 0;
  for (int i = 1; i <= d; i++){
    bool flag = 1;
    for (int j = 1; j <= n; j++){
      flag &= s[j][i] == 'o';
    }
    if (flag){
      cnt++;
    }else {
      cnt = 0;
    }
    ans = max(ans, cnt);
  }
  cout << ans;
  return 0;
}