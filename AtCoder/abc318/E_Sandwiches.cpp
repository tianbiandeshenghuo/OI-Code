#include<bits/stdc++.h>

using namespace std;
const int MAXN = 3e5 + 5;
int n, a[MAXN];
vector<int> cnt[MAXN];
long long ans;
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for (int i = n; i >= 1; i--){
    for (int j = 0; j < cnt[a[i]].size(); j++){
      int v = cnt[a[i]][j];
      ans += 1ll * (v - i - (cnt[a[i]].size() - j));
      if (1ll * (v - i - (cnt[a[i]].size() - j)) == 0){
        break;
      }
    }
    cnt[a[i]].push_back(i);
  }
  cout << ans;
  return 0;
}