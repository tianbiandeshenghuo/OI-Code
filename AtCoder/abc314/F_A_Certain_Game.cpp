#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5, Mod = 998244353;
int n, c[MAXN], sum[MAXN], qp[MAXN];
long long inv[2 * MAXN];
vector<int> b[MAXN];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    c[i] = i, b[i].push_back(i);
  }
  inv[1] = 1;
  for (int i = 2; i < 2 * MAXN; i++){
    inv[i] = (Mod - Mod / i) * inv[Mod % i] % Mod;
  }
  for (int i = 1; i < n; i++){
    int p, q;
    cin >> p >> q;
    if (b[c[p]].size() < b[c[q]].size()){
      swap(p, q);
    }
    int t = b[c[p]].size() + b[c[q]].size(), tp = b[c[q]].size();
    (sum[c[p]] += inv[t] * b[c[p]].size() % Mod) %= Mod; 
    long long now = sum[c[q]];
    for (auto v : b[c[q]]){
      (qp[v] += inv[t] * tp % Mod + now - sum[c[p]] + Mod) %= Mod;
      b[c[p]].push_back(v), c[v] = c[p];
    }
  }
  for (int i = 1; i <= n; i++){
    cout << (qp[i] + sum[c[i]]) % Mod << ' ';
  }
  return 0;
}
