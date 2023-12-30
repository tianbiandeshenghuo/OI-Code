#include<bits/stdc++.h>

using namespace std;
const int MAXN = 3e5 + 5;
int n, col = -1, maxx[MAXN], cmaxx[MAXN], pmaxx, pcmaxx, cnt, ans;
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1, f, s; i <= n; i++){
    cin >> f >> s;
    if (s > maxx[f]){
      cmaxx[f] = maxx[f];
      maxx[f] = s;
    }else if (s > cmaxx[f]){
      cmaxx[f] = s;
    }
    col = max(col, f);
  }
  for (int i = 1; i <= n; i++){
    if (maxx[i] > pmaxx){
      cnt = i;
      pcmaxx = pmaxx;
      pmaxx = maxx[i];
    }else if (maxx[i] > pmaxx){
      pmaxx = maxx[i];
    }
  }
  for (int i = 1; i <= n; i++){
    if (cnt == i){
      ans = max(ans, maxx[i] + pcmaxx);
    }else {
      ans = max(ans, maxx[i] + pmaxx);
    }
    int a = max(maxx[i], cmaxx[i]), b = min(maxx[i], cmaxx[i]);
    ans = max(ans, a + b / 2);
  }
  cout << ans;
  return 0;
}