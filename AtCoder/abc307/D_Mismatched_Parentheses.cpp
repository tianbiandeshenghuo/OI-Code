#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n;
string s;
vector<int> a;
int v[MAXN];
int main(){
  //赛后写出
  cin >> n >> s;
  //freopen("t.in", "r", stdin);
  for (int i = 0; i < n; i++){
    if (s[i] == '('){
      a.push_back(i);
    }else if (s[i] == ')' && a.size()){
      v[*(--a.end())]++, v[i + 1]--;
      a.pop_back();
    }
  }
  for (int i = 1; i < n; i++){
    v[i] += v[i - 1];
  }
  for (int i = 0; i < n; i++){
    if (!v[i]){
      cout << s[i];
    }
  }
  return 0;
}