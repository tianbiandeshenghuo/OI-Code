#include<bits/stdc++.h>

using namespace std;
int n;
struct Node{
  int cnt, id;
  bool operator<(const Node &i)const{
    return cnt == i.cnt ? id < i.id : cnt > i.cnt;
  }
} a[105];
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++){
    string s;
    cin >> s;
    for (auto v : s){
      if (v == 'o'){
        a[i].cnt++;
      }
    }
    a[i].id = i;
  }
  sort(a + 1, a + n + 1);
  for (int i = 1; i <= n; i++){
    cout << a[i].id << ' ';
  }
  return 0;
}