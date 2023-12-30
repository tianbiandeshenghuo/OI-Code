#include<bits/stdc++.h>
#define rd(x) rd() % x

using namespace std;
const long long MAXN = 100;
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  freopen("t.in", "w", stdout);
  random_device rd;
  int n = rd(10) + 1;
  cout << n << '\n';
  for (int i = 1; i <= n; i++){
    cout << rd(15) << ' ';
  }
  return 0;
}