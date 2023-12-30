#include<bits/stdc++.h>
#define rd rand
#define rand(x) rand() % x

using namespace std;

int main(){
  freopen("t.in", "w", stdout);
  int n = 2e5;
  srand(time(0));
  cout << n << '\n';
  for (int i = 1; i <= 1e5; i++){
    cout << "(";
  }
  for (int i = 1; i <= 1e5; i++){
    cout << ")";
  }
  return 0;
}