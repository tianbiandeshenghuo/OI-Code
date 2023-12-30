#include<bits/stdc++.h>
#define f first
#define s second

using namespace std;
using pii = pair<int, int>;
const int MAXN = 1e6 + 5;
int cnt[MAXN];
int vis[MAXN];
int lastv[MAXN];
struct Node{
  char s;
  int x;
} a[MAXN];
vector<int> que;
vector<pii> del, add;
bool last;
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int q;
  cin >> q;
  for (int i = 1; i <= q; i++){
    cin >> a[i].s >> a[i].x;
    if (a[i].s == '?'){
      que.push_back(i);
    }else if (a[i].s == '!'){
      if (last){
        del.pop_back();
      }else {
        add.pop_back();
      }
    }
  }

  return 0;
}