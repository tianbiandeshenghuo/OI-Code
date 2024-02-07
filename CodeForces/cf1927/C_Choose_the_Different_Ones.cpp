#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1e6 + 5;
int n, m, k;
int a[MAXN], b[MAXN];
int cnt[MAXN], cnt1[MAXN];
void Solve(){
  cin >> n >> m >> k;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    cnt[i] = cnt1[i] = 0;
  }
  for (int i = 1; i <= m; i++){
    cin >> b[i];
  }
  sort(a + 1, a + n + 1);
  sort(b + 1, b + m + 1);
  for (int i = 1; i <= n; i++){
    cnt[a[i]]++;
  }
  for (int i = 1; i <= m; i++){
    cnt1[b[i]]++;
  }
  unordered_map<int, int> lose;
  for (int i = 1; i <= k; i++){
    lose[i] = 1;
    if (!cnt[i] && !cnt1[i]){
      cout << "NO\n";
      return ;
    }
  }
  int A = k / 2, B = k / 2;
  for (int i = 1; i <= n && A; i++){
    if (!cnt1[a[i]] && a[i] <= k){
      lose.erase(a[i]);
      A--;
    }
  }
  for (int i = 1; i <= m && B; i++){
    if (!cnt[b[i]] && b[i] <= k){
      lose.erase(b[i]);
      B--;
    }
  }
  for (int i = 1; i <= n && A; i++){
    if (lose.find(a[i]) != lose.end()){
      lose.erase(a[i]);
      A--;
    }
  }
  for (int i = 1; i <= m && B; i++){
    if (lose.find(b[i]) != lose.end()){
      lose.erase(b[i]);
      B--;
    }
  }
  cout << (A == 0 && B == 0 && !lose.size() ? "YES\n" : "NO\n");
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}