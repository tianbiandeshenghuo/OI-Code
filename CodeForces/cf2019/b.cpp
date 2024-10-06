#include<bits/stdc++.h>
#define int long long

using namespace std;
const int MAXN = 1e5 + 5;
int n, q, x[MAXN];
int vis[MAXN];
void Solve(){
  cin >> n >> q;
  for (int i = 1; i <= n; i++){
    cin >> x[i];
  }
  map<int, int> mp;
  for (int i = 1; i <= n; i++){
    mp[]
  }
  while (q--){
    int x;
    cin >> x;
    
  }
  cout << '\n';
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
/*
1 1 1 1
2 2 2 2 2 2 2 
3 3 3 3 3 3 3 3
4 4 4 4 4 4 4
5 5 5 5

[1,2],[1,3],[1,4],[1,5]
      [2,3],[2,4],[2,5]
            [3,4],[3,5]
                  [4,5]
*/