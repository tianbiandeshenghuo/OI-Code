#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1e5 + 5;
int n, m;
struct Node{
  int maxx, lz;
}tr[4 * MAXN];
void js(int id, int l, int r){
  if (l == r){
    cin >> tr[id].maxx;
    return ;
  }
  int mid = (l + r) >> 1;
  js(id * 2, l, mid);
  js(id * 2 + 1, mid + 1, r);
  tr[id].maxx = max(tr[id * 2].maxx, tr[id * 2 + 1].maxx);
}
void pushdown(int id){
  int lz = tr[id].lz;
  tr[id * 2].lz += lz;
  tr[id * 2 + 1].lz += lz;
  tr[id * 2].maxx += lz;
  tr[id * 2 + 1].maxx += lz;
  tr[id].lz = 0;
}
void xg(int id, int l, int r, int ql, int qr, int p){
  if (l > qr || r < ql){
    return ;
  }else if (ql <= l && r <= qr){
    tr[id].maxx += p;
    tr[id].lz += p;
    return ;
  }
  pushdown(id);
  int mid = (l + r) >> 1;
  xg(id * 2, l, mid, ql, qr, p);
  xg(id * 2 + 1, mid + 1, r, ql, qr, p);
  tr[id].maxx = max(tr[id * 2].maxx, tr[id * 2 + 1].maxx);
}
int find(int id, int l, int r, int ql, int qr){
  if (l > qr || r < ql){
    return -1e9;
  }else if (ql <= l && r <= qr){
    return tr[id].maxx;
  }
  pushdown(id);
  int mid = (l + r) >> 1;
  return max(find(id * 2, l, mid, ql, qr), find(id * 2 + 1, mid + 1, r, ql, qr));
}
void Solve(){
  cin >> n >> m;
  js(1, 1, n);
  while (m--){
    char op;
    int l, r;
    cin >> op >> l >> r;
    if (op == '+'){
      xg(1, 1, n, l, r, 1);
    }else {
      xg(1, 1, n, l, r, -1);
    }
    cout << find(1, 1, n, 1, n) << ' ';
  }
  cout << '\n';
}
signed main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--){
    Solve();
  }
  return 0;
}