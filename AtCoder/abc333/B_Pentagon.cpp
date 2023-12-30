#include<bits/stdc++.h>
#define Yes cout << "Yes"

using namespace std;
string a, b;
int x[1000][1000];
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> a >> b;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  x['A']['B'] = x['B']['C'] = x['C']['D'] = x['D']['E'] = x['A']['E'] = 1;
  x['A']['C'] = x['A']['D'] = x['B']['D'] = x['B']['E'] = x['C']['E'] = 2;
  cout << (x[a[0]][a[1]] == x[b[0]][b[1]] ? "Yes" : "No");
  return 0;
}