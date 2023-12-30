#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, h, x;
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> h >> x;
  for (int i = 1, p; i <= n; i++){
    cin >> p;
    if (h + p >= x){
      cout << i;
      return 0;
    }
  }
  return 0;
}