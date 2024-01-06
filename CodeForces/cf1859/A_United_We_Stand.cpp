#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, m, a[MAXN];
void Solve(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  vector<int> b, c;
  b.push_back(a[1]);
  for (int i = 2; i <= n; i++){
    bool flag = 0;
    for (auto v : b){
      if (v % a[i]){
        flag = 1;
        break;
      }
    }
    if (flag){
      c.push_back(a[i]);
    }else {
      b.push_back(a[i]);
    }
  }
  if (!c.size()){
    cout << "-1\n";
  }else {
    cout << b.size() << ' ' << c.size() << '\n';
    for (int i = 0; i < b.size(); i++){
      cout << b[i] << " \n"[i == b.size() - 1];
    }
    for (int i = 0; i < c.size(); i++){
      cout << c[i] << " \n"[i == c.size() - 1];
    }
  }
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}