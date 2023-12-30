#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, k, a[MAXN], cnt[MAXN];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> k;
  for (int i = 1; i <= n; i++){
    cnt[i] = 2;
  }
  for (int i = 1; i <= k; i++){
    cin >> a[i];
    cnt[a[i]]--;
  }
  set<int> b;
  for (int i = 1; i <= n; i++){
    if (cnt[i] == 2){
      cnt[i] = 0;
    }else {
      b.insert(i);
    }
  }
  if (b.size() % 2){
    int ans = 0;
    if (b.size() == 1){
      cout << 0;
      return 0;
    }
    bool f = 1;
    set<int> qwq;
    for (auto v = b.begin(); v != b.end(); v++){
      if (v != --b.end()){
        qwq.insert(abs(*v - *++v));
      }else {
        break;
      }
    }
    for (auto v = b.begin(); v != b.end(); v++){
      int a = abs(*v - *++v);
      if (f && a == *--qwq.end()){
        v--;
        f = 0;
        continue;
      }
      ans += a;
    }
    cout << ans;
  }else {
    int ans = 0;
    for (auto v = b.begin(); v != b.end(); v++){
      ans += abs(*v - *++v);
    }
    cout << ans;
  }
  return 0;
}

/*
1 1 2 1 2 2 1 1
1 2 3 4 5 6 7 8
*/