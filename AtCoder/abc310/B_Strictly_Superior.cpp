#include<bits/stdc++.h>

using namespace std;
int n, m;
struct Node{
  int p, c, a[105];
} a[105];
bool check(int x, int y){
  if (a[x].p >= a[y].p){
    bool v[105] = {0}, vv[105] = {0};
    for (int i = 1; i <= a[y].c; i++){
      v[a[y].a[i]] = 1;
    }
    for (int i = 1; i <= a[x].c; i++){
      if (!v[a[x].a[i]]){
        return 0;
      }
    }
    return a[x].p > a[y].p || a[x].c < a[y].c;
  }
  return 0;
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= n; i++){
    cin >> a[i].p >> a[i].c;
    for (int j = 1; j <= a[i].c; j++){
      cin >> a[i].a[j];
    }
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      if (i == j){
        continue;
      }
      if (check(i, j)){
        cout << "Yes";
        return 0;
      }
      cout << '\n';
    }
  }
  cout << "No";
  return 0;
}