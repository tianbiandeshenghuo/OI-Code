#include<bits/stdc++.h>

using namespace std;
const int MAXN = 2e5 + 5;
int n, a[MAXN], qq[MAXN], p[MAXN], cnt;
struct Node{
  int l, r;
} b[MAXN / 2 + 5];
int search(int x, int t){
  int cnt;
  if (t == 2){
    int l = 0, r = n / 2;
    while (l < r){
      int mid = (l + r + 1) >> 1;
      if (b[mid].l <= x){
        l = mid;
      }else {
        r = mid - 1;
      }
      cnt = l;
    }
  }else {
    int l = 1, r = n / 2 + 1;
    while (l < r){
      int mid = (l + r) >> 1;
      if (b[mid].r < x){
        l = mid + 1;
      }else {
        r = mid;
      }
      cnt = l;
    }
  }
  
  return cnt;
}
int main(){
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  //freopen("C:\\Users\\XRY\\Desktop\\test.txt", "r", stdin);
  //freopen("test.txt", "w", stdout);
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }
  for (int i = 2; i <= n; i += 2){
    b[i >> 1].l = a[i], b[i >> 1].r = a[i + 1];
    cnt += a[i + 1] - a[i];
    qq[i >> 1] = qq[(i >> 1) - 1] + b[i >> 1].r - b[i >> 1].l;
   	//cout << b[i >> 1].l << ' ' << b[i >> 1].r << '\n';
  }
  for (int i = 2; i <= n; i += 2){
    //cout << qq[i >> 1] << " \n"[i == n - 1];
  }
  for (int i = n; i >= 2; i -= 2){
    p[i >> 1] = p[(i >> 1) + 1] + b[i >> 1].r - b[i >> 1].l;
  }
  for (int i = 2; i <= n; i += 2){
    //cout << p[i >> 1] << " \n"[i == n - 1];
  }
  int q;
  cin >> q;
  while (q--){
    int l, r, sum = 0;
    cin >> l >> r;
    //int x,y;
    int x = search(l, 1), y = search(r, 2);
    //cout << x << ' ' << y << '\n';
    sum += qq[y] + p[x] - sum;

    //cout << x << ' ' << y << '\n';
    sum += p[x] + qq[y] - cnt;
    cout << sum << '\n';
  }
  return 0;
}