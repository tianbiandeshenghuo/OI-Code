#include<bits/stdc++.h>

using namespace std;
string s;
string cnt;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> s;
  for (auto v : s){
    cnt.push_back(v);
    if (cnt.size() >= 3 && cnt[cnt.size() - 1] == 'C' && cnt[cnt.size() - 2] == 'B' && cnt[cnt.size() - 3] == 'A'){
      cnt.pop_back();
      cnt.pop_back();
      cnt.pop_back();
    }
  }
  cout << cnt;
  return 0;
}
