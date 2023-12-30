#include<bits/stdc++.h>
#include "testlib.h"

using namespace std;
const int MAXN = 1e6 + 5;
int t, n, m, a[MAXN], as[MAXN];
void Solve(){
  
}
int main(int argc, char *argv[]){
  registerTestlibCmd(argc, argv);
  t = inf.readInt();
  int qp = 0;
  for (int i = 1; i <= t; i++){
    n = inf.readInt();
    int x = n * (n - 1) / 2;
    for (int i = 1; i <= x; i++){
      a[i] = inf.readInt();
    }
    for (int i = 1; i <= n; i++){
      as[i] = ouf.readInt();
    }
    vector<int> b;
    for (int i = 1; i <= n; i++){
      for (int j = i + 1; j <= n; j++){
        b.push_back(min(as[i], as[j]));
      }
    }
    sort(a + 1, a + x + 1);
    sort(b.begin(), b.end());
    for (int i = 1; i <= x; i++){
      if (b[i - 1] != a[i]){
        if (!qp){
          qp = t;
        }
      }
      cerr << b[i - 1] << ' ' << a[i] << '\n';
    }
    cerr << '\n';
  }
  if (qp){
    quitf(_wa, "Wrong answer on test #%d", qp);
  }else {
    quitf(_ok, "Answer correctd");
  }
  return 0;
}