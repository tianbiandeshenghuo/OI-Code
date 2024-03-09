#include <bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 2e5 + 5;
int n, t, sc[MAXN];
map<int, int> cnt;
set<int> p;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> t;
  cnt[0] = n;
  p.insert(0);
  for (int i = 1; i <= t; i++){
    int x, y;
    cin >> x >> y;
    cnt[sc[x]]--;
    if (!cnt[sc[x]]){
      p.erase(sc[x]);
    }
    sc[x] += y;
    cnt[sc[x]]++;
    p.insert(sc[x]);
    cout << p.size() << '\n';
  }
  return 0;
}