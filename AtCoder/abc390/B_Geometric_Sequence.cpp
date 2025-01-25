#include<bits/stdc++.h>
#define int unsigned long long

using namespace std;
int n, a[105];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  double t = 1.0 * a[2] / a[1];
  for (int i = 2; i <= n; i++){
    if (a[i] != a[i - 1] * t){
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}