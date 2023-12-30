#include<bits/stdc++.h>

using namespace std;
int n, m, a[105], cnt[105], maxx = -1;
vector<int> b[105];
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= m; i++){
    cin >> a[i];
  }
  for (int j = 1; j <= n; j++){
    string s;
    cin >> s;
    for (int i = 0; i < m; i++){
      if (s[i] == 'o'){
        cnt[j] += a[i + 1];
      }else {
        b[j].push_back(a[i + 1]);
      }
    }
    sort(b[j].begin(), b[j].end());
    cnt[j] += j;
    maxx = max(maxx, cnt[j]);
  }
  for (int j = 1; j <= n; j++){
    int ans = 0;
    while (cnt[j] < maxx){
      cnt[j] += b[j].back();
      b[j].pop_back();
      ans++;
    }
    cout << ans << '\n';
  }
  return 0;
}