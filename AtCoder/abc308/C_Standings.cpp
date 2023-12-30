#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n;
struct Node{
  long long x, y;
  int id;
} a[MAXN];
bool cmp(Node a, Node b){
  long long x = a.x * (b.x + b.y), y = b.x * (a.x + a.y);
  return x == y ? a.id < b.id : x > y;
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    long long x, y;
    cin >> x >> y;
    a[i] = {x, y, i};
  }
  sort(a + 1, a + n + 1, cmp);
  for (int i = 1; i <= n; i++){
    cout << a[i].id << ' ';
  }
  return 0;
}