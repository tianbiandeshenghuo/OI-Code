#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int w, h, n, _a, _b, b[MAXN], c[MAXN];
struct Node{
  int x, y;
  bool operator<(const Node &i)const{
    return x == i.x ? x < i.x : y < i.y;
  }
} a[MAXN];
int scx(int x){
  int l = 1, r = _a + 1;
  while (l < r){
    int mid = (l + r) >> 1;
    if (b[mid] < x){
      l = mid + 1;
    }else {
      r = mid;
    }
  }
  return l;
}
int scy (int x){
  int l = 1, r = _b + 1;
  while (l < r){
    int mid = (l + r) >> 1;
    if (c[mid] < x){
      l = mid + 1;
    }else {
      r = mid;
    }
  }
  return l;
}
map<pair<int, int>, int> q;
int main(){
  cin >> w >> h >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i].x >> a[i].y;
  }
  cin >> _a;
  b[1] = 0;
  for (int i = 1; i <= _a; i++){
    cin >> b[i];
  }
  cin >> _b;
  c[1] = 0;
  for (int i = 1; i <= _b; i++){
    cin >> c[i];
  }
  for (int i = 1; i <= n; i++){
    int x = scy(a[i].x), y = scx(a[i].y);
    q[{x, y}]++;
  }
  int ansmin = INT_MAX, ansmax = INT_MIN, op = 0;
  for (auto v : q){
    ansmin = min(ansmin, v.second);
    ansmax = max(ansmax, v.second);
  }
  if (q.size() < 1ll * (_a + 1) * (_b + 1)){
    ansmin = 0;
  }
  cout << ansmin << ' ' << ansmax;
  return 0;
}
/*
3 1
2 1
2 1
1 3
3 1
*/