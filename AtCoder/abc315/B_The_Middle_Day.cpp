#include<bits/stdc++.h>

using namespace std;
int n, a[105];
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    sum += a[i];
  }
  sum++;
  sum /= 2;
  for (int i = 1; i <= n; i++){
    if (sum > a[i]){
      sum -= a[i];
    }else {
      cout << i << ' ' << sum;
      return 0;
    }
  }
  return 0;
}