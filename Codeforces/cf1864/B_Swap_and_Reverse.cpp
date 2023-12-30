#include<bits/stdc++.h>

using namespace std;
int n, k;
string s;
void Solve(){
  cin >> n >> k >> s;
  if (k % 2 == 0){
    sort(s.begin(), s.end());
    cout << s << '\n';
    return ;
  }
  string a, b;
  for (int i = 0; i < n; i++){
    if (i % 2){
      b.push_back(s[i]);
    }else {
      a.push_back(s[i]);
    }
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  for (int i = 0; i < a.size() || i < b.size(); i++){
    if (i < a.size()){
      cout << a[i];
    }
    if (i < b.size()){
      cout << b[i];
    }
  }
  cout << '\n';
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