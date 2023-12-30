#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1e3 + 5;
long long n, m;
vector<int> a(MAXN);
void Solve(){
  a.clear();
  cin >> n >> m;
  if (n % m == 0){
    cout << "0\n";
    return ;
  }else if ((1 << int(log2(m))) != m){
    cout << "-1\n";
    return ;
  }
  double p = 1.0 * n / m, QwQ = 1;
  long long ans = 0, cnt = 1;
  a[0] = n;
  cerr << fixed << setprecision(5);
  for (int i = 0; i <= 100 && p; i++){
    ans += QwQ * m * (QwQ / p);
    p *= cnt;
    p -= int(p);
    cnt *= 10;
    QwQ /= 2;
  }
  cout << ans - 1 << '\n';
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
/*
3 8 -> 0.375

0.5 0.5 0.5
0.25 0.25 0.25 0.25 0.25 0.25
0.125 0.125 0.125 0.125 0.125 0.125
*/