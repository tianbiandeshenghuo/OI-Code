#include<bits/stdc++.h>

using namespace std;
int n;
struct Node{
  string s;
  int a;
  bool operator<(const Node &i)const{
    return a < i.a;
  }
} a[105];
int main(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i].s >> a[i].a;
  }
  int minn = INT_MAX, x;
  for (int i = 1; i <= n; i++){
    if (a[i].a < minn){
      minn = a[i].a;
      x = i;
    }
  }
  for (int i = x; i <= n; i++){
    cout << a[i].s << '\n';
  }
  for (int i = 1; i < x; i++){
    cout << a[i].s << '\n';
  }
  return 0;
}