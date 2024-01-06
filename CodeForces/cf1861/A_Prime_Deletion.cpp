#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
string s;
bool flag;
bool check(int x){
  if (x < 10){
    return 0;
  }
  for (int i = 2; i * i <= x; i++){
    if (x % i == 0){
      return 0;
    }
  }
  return 1;
}
void dfs(int x, int cnt){
  if (flag){
    return ;
  }
  if (x == 9){
    if (check(cnt)){
      cout << cnt << '\n';
      flag = 1;
    }
    return ;
  }
  dfs(x + 1, cnt * 10 + s[x] - '0');
  dfs(x + 1, cnt);
}
void Solve(){
  cin >> s;
  flag = 0;
  dfs(0, 0);
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