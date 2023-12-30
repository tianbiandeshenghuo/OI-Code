#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
long long n, a[MAXN], b[MAXN];
long long ans;
long long x;
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    x += a[i];
  }
  long long q = x / n, p = x % n;
  sort(a + 1, a + n + 1);
  for (int i = 1; i <= n - p; i++){
    ans += abs(q - a[i]);
  }
  for (int i = n - p + 1; i <= n; i++){
    ans += abs(a[i] - (q + 1));
  }
  //cout << x << ' ' << ans << '\n';
  cout << ans / 2;
  return 0;
}