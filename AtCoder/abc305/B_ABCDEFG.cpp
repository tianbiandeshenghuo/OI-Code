#include<bits/stdc++.h>

using namespace std;
char a, b;
int q[7] = {3, 1, 4, 1, 5, 9}, ans;
int main(){
  cin >> a >> b;
  if (b < a){
    swap(a, b);
  }
  for (int i = a - 'A'; i < b - 'A'; i++){
    ans += q[i];
  }
  cout << ans;
  return 0;
}