#include<bits/stdc++.h>
#define f first
#define s second

using namespace std;
const double eps = 1e-8;
using pii = pair<double, double>;
pii p, a, b;
double jl(pii a, pii b){
  return sqrt((a.f - b.f) * (a.f - b.f) + (a.s - b.s) * (a.s - b.s));
}
void Solve(){
  cin >> p.f >> p.s >> a.f >> a.s >> b.f >> b.s;
  pii m = {(a.f + b.f) / 2, (a.s + b.s) / 2};
  double ans = 1e9;
  ans = min({max(jl(p, a), jl(a, {0.0, 0.0})), max(jl(p, b), jl(b, {0.0, 0.0}))});
  ans = min(ans, max({jl(p, a), jl({0.0, 0.0}, b), jl(a, m), jl(b, m)}));
  ans = min(ans, max({jl(p, b), jl({0.0, 0.0}, a), jl(a, m), jl(b, m)}));
  cout << ans << '\n';
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cout << fixed << setprecision(10);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}