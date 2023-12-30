#include<bits/stdc++.h>

using namespace std;
int cnta, cntb;
int main(){
  system("g++ sol.cpp -o sol.out");
  system("g++ xs.cpp -o xs.out");
  system("g++ checker.cpp -o checker.out");
  for (int i = 1; i <= 1e4; i++){
    system("./checker.out");
    long long timea = clock();
    system("./xs.out");
    long long timeb = clock();
    system("./sol.out");
    if (system("diff t.out t.ans")){
      cout << "Wrong answer on test #" << i << ",time:" << timeb - timea << "ms.\n";
      cntb++;
      return 0;
    }else {
      cnta++;
      cout << "Accept on test #" << i << ",time:" << timeb - timea << "ms.\n";
    }
  }
  cout << "";

  return 0;
}
