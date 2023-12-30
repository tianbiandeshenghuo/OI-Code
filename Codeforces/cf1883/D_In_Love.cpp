#include<bits/stdc++.h>
#define int long long

using namespace std;
int q;
struct Node{
  int l, r;
  bool operator<(const Node &i)const{
    return l == i.l ? r < i.r : l < i.l;
  }
};
void Solve(){
  multiset<Node> a;
  cin >> q;
  while (q--){
    char op;
    int l, r;
    cin >> op >> l >> r;
    if (op == '+'){
      a.insert({l, r});
    }else {
      a.erase(a.find({l, r}));
    }
    if (a.size() == 0){
      cout << "NO\n";
      continue;
    }
    
    auto y = *a.rbegin();
    auto p = a.begin();
    bool f = 1;
    for (int i = 1; i <= 100 && i <= a.size(); i++, p++){
      auto x = *p;
      if (x.r < y.l){
        cout << "YES\n";
        f = 0;
        break;
      }
    }
    if (f){
      cout << "NO\n";
    }
  }
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  //cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}