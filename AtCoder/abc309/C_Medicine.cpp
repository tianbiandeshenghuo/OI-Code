#include<bits/stdc++.h>

using namespace std;
const int MAXN = 3e5 + 5;
int n, k;
long long cnt, sum;
struct Node{
  int a, b, id;
  bool operator<(const Node &i)const{
    return a < i.a;
  }
} a[MAXN];
queue<int> b;
int main(){
  cin >> n >> k;
  for (int i = 1; i <= n; i++){
    cin >> a[i].a >> a[i].b;
    sum += a[i].b;
    a[i].id = i;
  }
  sort(a + 1, a + n + 1);
  for (int i = 1, j = 1; ; ){
    if (sum <= k){
      cout << j;
      return 0;
    }
    sum -= a[i].b;
    j = a[i].a + 1;
    i++;
  }
  return 0;
}