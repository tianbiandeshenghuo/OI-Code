#include<bits/stdc++.h>

using namespace std;
int n;
struct Node{
  int k, a[55];
  bool operator<(const Node &i)const{
    return k > i.k;
  }
}a[55];
void Solve(){
  cin >> n;

  for (int i = 1; i <= n; i++){
    cin >> a[i].k;
    for (int j = 1; j <= a[i].k; j++){
      cin >> a[i].a[j];
    }
  }
  sort(a + 1, a + n + 1);
  int _ans = 0;
  for (int q = 1; q <= n; q++){
    set<int> ans, b;
    for (int i = 1; i <= n; i++){
      for (int j = 1; j <= a[i].k; j++){
        b.insert(a[i].a[j]);
      }
    }
    for (int i = q; i <= n; i++){
      for (int j = 1; j <= a[i].k; j++){
        b.erase(a[i].a[j]);
      }
      if (b.empty()){
        for (int j = 1; j <= a[i].k; j++){
          b.insert(a[i].a[j]);
        }
        for (auto v : ans){
          b.erase(v);
        }
      }else {
        for (int j = 1; j <= a[i].k; j++){
          ans.insert(a[i].a[j]);
        }
      }
    }
    _ans = max(_ans, (int)ans.size());
    /*
    for (auto v : ans){
      cerr << v << ' ';
    }
    cerr << '\n';
    for (auto v : b){
      cerr << v << ' ';
    }
    cerr << "\n\n";*/
  }
  cout << _ans << '\n';
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
/*
1
3 6 10 +3
9
1 3
5 8 9 +3
*/

/*
1 2 3 4 +4
2 5 6
3 5 6
4 5 6
*/