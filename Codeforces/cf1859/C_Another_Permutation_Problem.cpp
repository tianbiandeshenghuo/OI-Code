#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, m, a[MAXN];
long long check(int n){
  long long cnt = 0, maxx = -1;
  for (int i = 1; i <= n; i++){
    cnt += a[i] * i;
    maxx = max(maxx, 1ll * a[i] * i);
  }
  return cnt - maxx;
}
int main(){
  //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  for (int i = 1; i <= 250; i++){
    long long ans = -1;
    for (int j = 1; j <= i; j++){
      a[j] = j;
    }
    do{
      ans = max(ans, check(i));
    }while (next_permutation(a + 1, a + i + 1));
    cout << ans << '\n';
  }
  return 0;
}
/*
2 5 10 18 27 38 52 67 84 103 124
+3 +5 +8 +9 +11 +14 +15 +17 + 19 + 21
*/