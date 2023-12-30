#include<bits/stdc++.h>

using namespace std;
int n, m, now = 1;
vector<int> a[105];
bool vis[105], vvis[105];
int main(){
  srand(time(0));
  cin >> n >> m;
  while (1){
    string s;
    cin >> s;
    if (s == "-1"){
      return 0;
    }else if (s == "OK"){
      return 0;
    }
    int k = 0;
    int len = s.size();
    for (int i = 0; i < len; i++){
      k = k * 10 + s[i] - '0';
    }
    bool fflag = 0;
    while (k--){
      int x;
      cin >> x;
      if (x == n){
        fflag = 1;
      }
      if (!vvis[now]){
        a[now].push_back(x);
      }
    }
    if (fflag){
      cout << n << endl;
      continue;
    }
    bool flag = 1;
    for (auto v : a[now]){
      if (!vis[v]){
        cout << v << endl;
        now = v;
        vis[v] = 1;
        flag = 0;
        break;
      }
    }
    if (flag){
      vvis[now] = 1;
      int q = a[now].size(), op = rand() % q;
      while(vvis[op]){
        op = rand() % q;
      }
      cout << a[now][op] << endl;
    }
  }
  return 0;
}