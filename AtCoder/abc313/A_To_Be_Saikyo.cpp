#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, m, a[MAXN], maxx = -1, bmaxx = -1;
int main(){
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    if (a[i] > maxx){
      bmaxx = maxx, maxx = a[i];
    }else if (a[i] > bmaxx){
      bmaxx = a[i];
    }
  }
  //cerr << a[1] << ' ' << maxx << ' ' << bmaxx << ' ' << maxx - a[1] + 1 << ' ' << (maxx == a[1] && bmaxx != maxx);;
  if ((maxx == a[1] && bmaxx != maxx)){
    cout << 0;
  }else if (maxx == a[1] && bmaxx == maxx){
    cout << 1;
  }else {
    cout << max(0, maxx - a[1] + 1);
  }
  return 0;
}