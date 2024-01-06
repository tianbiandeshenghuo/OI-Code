#include<bits/stdc++.h>
using namespace std;
int t;
signed main(){
    cin>>t;
    while(t--){
string s;
        int cnt=0,len,flag=0;
        cin>>s;
        len=s.length();
        if(s=="()"){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        for(int i=0;i<len;i++){
            cnt=cnt+(s[i]=='('?-1:1);
            if(abs(cnt)>1) {flag=1;break;}
        }
        if(flag){
            for(int i=0;i<len;i++){
                cout<<"()";
            }
        }else{
            for(int i=0;i<len;i++) cout<<"(";
            for(int i=0;i<len;i++) cout<<")";
        }
        cout<<'\n';
    }
    return 0;
} 