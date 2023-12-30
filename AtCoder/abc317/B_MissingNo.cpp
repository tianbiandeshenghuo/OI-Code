#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, m, a[MAXN];
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
  for (int i = 2; i <= n; i++){
    if (i > 1 && a[i] != a[i - 1] + 1){
      cout << a[i - 1] + 1;
      return 0;
    }
  }
  return 0;
}