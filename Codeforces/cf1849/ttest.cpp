#include<bits/stdc++.h>
#pragma Gcc optimize(2)
#pragma Gcc optimize(1)
#pragma Gcc optimize(3)
using namespace std;
const int MAXN=3e5+100;
struct dd {
    long long a,id;
}a[MAXN];
long long t,n,k,b[MAXN];
bool cmp(dd x, dd y) {
    if (x.a==y.a){
        return x.id<y.id;
    }
    return x.a > y.a;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(),cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> n >> k;
        long long ans=0,l=0,o=0;
        for (long long i=1; i<=n; i++){
            cin >> a[i].a;
            a[i].a%=k;
            if (a[i].a==0){
                b[++l]=i;
            }
            ans+=a[i].a;
            a[i].id=i;
        }
        sort(a+1,a+n+1,cmp);
        for (int i=1; i<=n; i++){
            if (a[i].a!=0){
                b[++l]=a[i].id;
            }
        }
        for (int i=1; i<=n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}   
/*
 3 2 2 2
 3 1 2 4
*/