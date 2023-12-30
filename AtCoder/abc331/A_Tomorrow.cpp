#include<bits/stdc++.h>

using namespace std;
int M, D, y, m, d;
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> M >> D >> y >> m >> d;
  d++;
  while (d > D){
    m++;
    d -= D;
  }
  while (m > M){
    y++;
    m -= M;
  }
  cout << y << ' ' << m << ' ' << d;
  return 0;
}
