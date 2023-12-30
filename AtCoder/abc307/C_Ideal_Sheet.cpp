#include<bits/stdc++.h>

using namespace std;
int ha, hb, hx, wa, wb, wx;
string a[15], b[15], x[15];
int main(){
  cin >> ha >> wa;
  for (int i = 1; i <= ha; i++){
    cin >> a[i];
    a[i] = ' ' + a[i];
  }
  cin >> hb >> wb;
  for (int i = 1; i <= hb; i++){
    cin >> b[i];
    b[i] = ' ' + b[i];
  }
  cin >> hx >> wx;
  for (int i = 1; i <= hx; i++){
    cin >> x[i];
    x[i] = ' ' + x[i];
  }
  return 0;
}