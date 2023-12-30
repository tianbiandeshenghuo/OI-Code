#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1005;
long long n, k, a[MAXN];
int sum, ans[MAXN];
int main(){
  cin >> n >> k;
  for (int i = 1; i <= k + 1; i++){
    cout << "? ";
    for (int j = 1; j <= k + 1; j++){
      if (i == j){
        continue;
      }
      cout << j << ' ';
    }
    cout << endl;
    cin >> ans[i];
    if (i != k + 1){
      sum ^= ans[i];
    }
  }
  if (sum != ans[k + 1]){
    for (int i = 1; i <= k + 1; i++){
      ans[i] ^= 1;
    }
  }

  for (int i = k + 2; i <= n; i++){
    cout << "? ";
    int cnt = 0;
    for (int j = i - k + 1; j <= i; j++){
      cout << j << ' ';
    }
    for (int j = i - k + 1; j < i; j++){
      cnt ^= ans[j];
    }
    cout << endl;
    cin >> ans[i];
    ans[i] ^= cnt;
  }
  cout << "! ";
  for (int i = 1; i <= n; i++){
    cout << ans[i] << ' ';
  }
  cout << endl;
  return 0;
}