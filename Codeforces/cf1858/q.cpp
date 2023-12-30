#include<bits/stdc++.h>

using namespace std;
int cnt;
int main(){
  cout << int(1e6) << '\n';
  for (int i = 1; i <= 1e6; i++){
    if (i <= 1e5){
      cout << "+ 1\n";
      cnt++;
    }else if (i <= 2e5){
      cout << "- 1\n";
    }else if (i <= 4e5){
      cout << "!\n";
    }else {
      cout << "?\n";
    }
  }
  return 0;
}