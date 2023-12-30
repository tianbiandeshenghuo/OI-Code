#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, ans;
map<string, bool> x;
string check(string a){
  int len = a.size();
  for (int i = 0, j = len - 1; i < j; i++, j--){
    char s = a[i];
    a[i] = a[j];
    a[j] = s;
  }
  return a;
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    string s;
    cin >> s;
    if (x[s] == 0 && x[check(s)] == 0){
      ans++;
      x[s] = 1;
    }
  }
  cout << ans;
  return 0;
}