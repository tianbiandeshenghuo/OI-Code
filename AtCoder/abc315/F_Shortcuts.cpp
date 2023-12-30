/*
错解，O(n^2)
#include<bits/stdc++.h>
#define f first
#define s second

using namespace std;
using pdi = pair<long double, int>;
const int MAXN = 1e4 + 5;
int n;
pdi dp[MAXN];
struct Node{
  int x, y;
} a[MAXN];
long double jl(int x, int y){
  long double pop = 1.0;
  return sqrt(pop * (a[x].x - a[y].x) * (a[x].x - a[y].x) + pop * (a[x].y - a[y].y) * (a[x].y - a[y].y));
}
pdi merge(pdi b, int i, int j){
  pdi ans = b;
  ans.f += jl(i, j);
  ans.s += i - j - 1;
  return ans;
}
bool check(auto a, auto b){
  return abs(a - b) <= 1e-5;
}
pdi mmerge(pdi a, pdi b){
  long long x = (a.s == 0 ? 0 : (1 << max(0, a.s - 1))), y = (b.s == 0 ? 0 : (1 << max(0, b.s - 1)));
  if (check(a.f + x, b.f + y)){
    return pdi{a.f, min(a.s, b.s)};
  }else {
    if (a.f + x < b.f + y){
      return a;
    }else {
      return b;
    }
  }
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  freopen("qwq.txt", "w", stderr);
  cin >> n;
  cerr << fixed << setprecision(10);
  for (int i = 1; i <= n; i++){
    cin >> a[i].x >> a[i].y;
    for (int j = 1; j <= n; j++){
      dp[i].f = 1e100;
    }
    for (int j = 1; j < i; j++){
      //cerr << jl(i, j) << ' ';
    }
    //cerr << '\n';
  }
  dp[1].f = dp[1].s = 0;
  for (int i = 2; i <= n; i++){
    for (int j = 1; j < i; j++){
      cerr << '{' << dp[i].f << "," << dp[i].s << "}," << '{' << dp[j].f << "," << dp[j].s << "}" << ' ' << i << ' ' << j << '\n';
      dp[i] = mmerge(dp[i], merge(dp[j], i, j));
      cerr << '{' << dp[i].f << "," << dp[i].s << "}" << i << ' ' << j << '\n';
    }
  }
  cerr << dp[n].s << '\n';
  long long p = (dp[n].s == 0 ? 0 : (1 << max(0, dp[n].s - 1)));
  cout << fixed << setprecision(100) << dp[n].f + p;
  return 0;
}
*/
/*
正解,O(n*40*40)
*/
#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1e4 + 5;
int n;
long double dp[MAXN][205];
struct Node{
  int x, y;
} a[MAXN];
long double jl(int x, int y){
  long double pop = 1.0;
  return sqrt(pop * (a[x].x - a[y].x) * (a[x].x - a[y].x) + pop * (a[x].y - a[y].y) * (a[x].y - a[y].y));
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  cerr << fixed << setprecision(10);
  for (int i = 1; i <= n; i++){
    cin >> a[i].x >> a[i].y;
    for (int j = 0; j <= 200; j++){
      dp[i][j] = 1e50;
    }
  }
  dp[1][0] = 0;
  for (int i = 2; i <= n; i++){
    for (int k = 0; k <= 40; k++){
      for (int j = i - 1; i - j <= 40 && j >= 1; j--){
        dp[i][k + i - j - 1] = min(dp[i][k + i - j - 1], dp[j][k] + jl(i, j));
      }
    }
  }
  long double ans = dp[n][0];
  for (int i = 1; i <= 40; i++){
    ans = min(ans, dp[n][i] + (1ll << (i - 1)));
  }
  cout << fixed << setprecision(100) << ans;
  return 0;
}
