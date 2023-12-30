#include<bits/stdc++.h>

using namespace std;
const int MAXN = 100 + 5;
int n, x, cnt;
struct Node{
  int c, a[40], id;
  bool flag;
} a[105];
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i].c;
    for (int j = 1; j <= a[i].c; j++){
      cin >> a[i].a[j];
    }
    a[i].id = i;
  }
  cin >> x;
  int op = 2e9;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= a[i].c; j++){
      if (a[i].a[j] == x){
        a[i].flag = 1;
        op = min(op, a[i].c);
        break;
      }
    }
  }
  for (int i = 1; i <= n; i++){
    if (a[i].flag && a[i].c == op){
      cnt++;
    }
  }
  cout << cnt << '\n';
  for (int i = 1; i <= n; i++){
    if (a[i].flag && a[i].c == op){
      cout << i << ' ';
    }
  }
  return 0;
}