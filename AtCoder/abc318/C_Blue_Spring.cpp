#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
long long n, d, p, a[MAXN], hz[MAXN], ans = 1e18;
bool cmp(int a, int b){
  return a > b;
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> d >> p;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  sort(a + 1, a + n + 1, cmp);
  for (int i = n; i >= 1; i--){
    hz[i] = hz[i + 1] + a[i];
  }
  for (int i = 0; i <= n; i++){
    int pp = i / d + bool(i % d);
    //cerr << pp << ' ' << hz[i] << '\n';
    ans = min(ans, pp * p + hz[i + 1]);
  }
  cout << ans;
  return 0;
}