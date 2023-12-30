#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+100;
int w,h,n;
struct dd {
  int x, y;
}t[MAXN],e[MAXN];
long long s[MAXN][2],c[2],cnt=1;
int s1(int x,int f){
  int l=1, r=c[f]+1;
  while (l<r) {
    int mid=(l+r) >> 1;
    if (s[mid][f]>=x) {
      r=mid;
    } else {
      l=mid+1;
    }
  }
  return l;
}
bool cmp(dd x, dd y) {
  if (x.x==y.x){
    return x.y<y.y;
  }
  return x.x<y.x;
}
int main() {
  cin >> w >> h >> n;
  for (int i=1; i<=n; i++) {
    cin >> t[i].x >> t[i].y;
  }
  cin >> c[0];
  for (int i=1; i<=c[0]; i++) {
    cin >> s[i][0];
  }
  cin >> c[1];
  for (int i=1; i<=c[1]; i++) {
    cin >> s[i][1];
  }
  for (int i=1; i<=n; i++) {
    int x=s1(t[i].x,0);
    int y=s1(t[i].y,1);
    cout << x << ' ' << y << '\n';
    e[i]={x,y};
  }
  sort (e+1,e+n+1,cmp);
  int max1=0,min1=INT_MAX,ans=1;
  for (int i=2; i<=n; i++) {
    if (e[i].y!=e[i-1].y || e[i].x!=e[i-1].x){
      max1=max(max1,ans);
      min1=min(min1,max(1,ans));
      ans=1;
      cnt++;
    } else {
      ans++;
    }
  }
  max1=max(max1,ans);
  min1=min(min1,max(1,ans));
  if(cnt!=long((c[0]+1)*(c[1]+1))){
    min1=0;
  }
  cout << min1 << " " << max1;
  return 0;
}

/*
3 1
2 1
2 1
1 3
3 1
*/