#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, a[MAXN];
bool cmp(int a, int b){
  return a > b;
}
void Solve(){
  cin >> n;
  map<int, int> c;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    c[a[i]]++;
  }
  a[n + 1] = 0;
  if (a[1] != n){
    cout << "NO\n";
    return ;
  }
  vector<int> b; 
  for (int i = 1; i <= n; i++){
    while (a[i] == a[i + 1]){
      i++;
    }
    int x = i;
    for (int j = 1; j <= a[i] - a[i + 1]; j++){
      b.push_back(x);
    }
  }
  sort(b.begin(), b.end(), cmp);
  if (b.size() != n){
    cout << "NO\n";
    return ;
  }
  for (int i = 1; i <= n; i++){
    if (a[i] != b[i - 1]){
      cout << "NO\n";
      return ;
    }
  }
  cout << "YES\n";
}
int main(){
  //ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}