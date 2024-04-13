#include<bits/stdc++.h>

using namespace std;
string s;
map<char, int> mp;
int cnt[105];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> s;
  for (auto v : s){
    mp[v]++;
  }
  for (auto v : mp){
    cnt[v.second]++;
  }
  for (int i = 1; i <= 100; i++){
    if (cnt[i] != 0 && cnt[i] != 2){
      cerr << i << ' ' << cnt[i] << '\n';
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}