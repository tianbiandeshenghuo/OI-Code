#include<bits/stdc++.h>
#define int long long

using namespace std;
int n, q, cnt, qz[1005][1005], B[1005][1005];
string p[1005];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> q;
  for (int i = 0; i < n; i++){
    cin >> p[i];
    p[i] = ' ' + p[i];
    for (int j = 1; j <= n; j++){
      qz[i][j] = qz[i][j - 1] + (p[i][j] == 'B');
    }
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      B[i][j] = B[i - 1][j] + B[i][j - 1] - B[i - 1][j - 1] + qz[i][j];
    }
  }
  while (q--){
    int a, b, c, d, ans = 0;
    cin >> a >> b >> c >> d;
    a++, b++, c++, d++;
    if (c - a >= n){
      if (d - b >= n){
        ans += B[n][n] * (c - a) / n * (d - b) / n;
        d -= (d - b) / n * n;
        b = (b - 1) % n + 1;
        c -= (c - a) / n * n;
        a = (a - 1) % n + 1;
      }else {
        b = (b - 1) % n + 1;
        d = (d - 1) % n + 1;
        ans += (B[n][d] + B[n - 1][d] + B[n][d - 1]);
      }
    }
    if (d < b){
      swap(d, b);
    }
    if (c < a){
      swap(a, c);
    }
  }
  return 0;
}
/*
给定长度为 $n$ 的字符串 $s$ 和 $q$ 次操作，每次操作修改 s 的第 i 个字符为 c 或询问 s 中第 l 至第 r 个字符组成的子串是不是回文串
*/
