#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;

void Solve(){

}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  freopen("q.txt", "w", stdout);
  cout << "5000\n";
  srand(time(0));
  vector<int> b;
  for (int i = 1; i <= 9; i++){
    b.push_back(i);
  }
  for (int i = 1; i <= 5000; i++){
    random_shuffle(b.begin(), b.end());
    for (auto v : b){
      cout << v;
    }
    cout << '\n';
  }
  return 0;
}