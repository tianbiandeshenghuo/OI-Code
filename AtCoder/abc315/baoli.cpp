#include<bits/stdc++.h>
#define f first
#define s second

using namespace std;
using pdi = pair<long double, int>;
const int MAXN = 1e4 + 5;
int n;
long double ans = 1e100;
pdi dp[MAXN];
vector<int> bb, pp;
struct Node{
  int x, y;
} a[MAXN];
long double jl(int x, int y){
  long double pop = 1.0;
  return sqrt(pop * (a[x].x - a[y].x) * (a[x].x - a[y].x) + pop * (a[x].y - a[y].y) * (a[x].y - a[y].y));
}
void dfs(int x, long double a, long long b){
  if (x == n){
    long long p = (b == 0 ? 0 : (1ll << max(0ll, b - 1)));
    if (a + p < ans){
      pp = bb;
    }
    ans = min(ans, a + p);
    return ;
  }
  for (int i = x + 1; i <= n; i++){
    bb.push_back(i);
    dfs(i, a + jl(x, i), b + i - x - 1);
    bb.pop_back();
  }
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  freopen("qwqwq.txt", "w", stderr);
  cin >> n;
  cerr << fixed << setprecision(10);
  for (int i = 1; i <= n; i++){
    cin >> a[i].x >> a[i].y;
  }
  dfs(1, 0, 0);
  for (auto v : pp){
    cerr << v << ' ';
  }
  cerr << fixed << setprecision(10) << jl(1, 2) << ' ' << jl(2, 4) << ' ' <<  jl(4, 6) << ' ' <<  jl(6, 9) << ' ' << jl(9, 10);
  return 0;
}
/*
2 4 6 9 10 
*/