//luogu P3366
#include<bits/stdc++.h>
using namespace std;

const int N=3e5+5;

int u[N],v[N];//每条边连接的点 

int ch[N][2],fa[N],tag[N],id[N],val[N];

inline bool isrs(int x){return x==ch[fa[x]][1];}
inline bool isroot(int x){return x!=ch[fa[x]][0]&&x!=ch[fa[x]][1];}
inline void maintain(int x){
	id[x]=val[id[ch[x][0]]]>val[id[ch[x][1]]]?id[ch[x][0]]:id[ch[x][1]];
	if(val[x]>val[id[x]]) id[x]=x;
}
inline void rev(int x){
	tag[x]^=1;
	swap(ch[x][0],ch[x][1]);
}
inline void pushdown(int x){
	if(tag[x]){
		rev(ch[x][0]),rev(ch[x][1]);
		tag[x]=0;
	}
}
void update(int x){
	if(!isroot(x)) update(fa[x]);
	pushdown(x); 
}
void rotate(int x){
	int f=fa[x],g=fa[f],k=isrs(x);
	if(!isroot(f)) ch[g][isrs(f)]=x;
	ch[f][k]=ch[x][k^1];
	if(ch[x][k^1]) fa[ch[x][k^1]]=f;
	ch[x][k^1]=f,fa[x]=g,fa[f]=x;
	maintain(f),maintain(x);
}
void splay(int x){
	update(x);//splay之前将x祖先的tag全部下传
	for(int f;f=fa[x],!isroot(x);rotate(x)){
		if(!isroot(f)) rotate(isrs(x)==isrs(f)?f:x);
	}
}
int access(int x){//将x到根的点拉到一个splay中
	int p;
	for(p=0;x;p=x,x=fa[x]){
		splay(x),ch[x][1]=p,maintain(x);
	}
	return p;
}
void make_root(int x){//将x设置为根
	access(x),splay(x),rev(x);
}
int find(int x){//找到x所在树的根
	access(x),splay(x);
	while(ch[x][0]) x=ch[x][0];
	splay(x);
	return x;
}
void split(int x,int y){//将x,y拉到一个splay中
	make_root(x),access(y),splay(y);
}
void link(int x,int y){//连边
	make_root(x);
	if(find(y)!=x){
		fa[x]=y;
	}
}
void cut(int x,int y){//断边
	split(x,y);
	if(find(y)==x&&fa[y]==x&&!ch[y][0]){
		fa[y]=ch[x][1]=0;
		maintain(x);
	}
}

signed main(){
	int n,tn,m,res=0;
	cin>>n>>m;
	tn=n;//记录联通块数
	for(int i=1;i<n;i++){
		cin>>u[i+n]>>v[i+n]>>val[i+n];
		int x=u[i+n],y=v[i+n];
		if(find(y)!=find(x)){//若未联通直接插入
//			cout<<1<<endl;
			link(x,i+n),link(i+n,y);
			res+=val[i+n];
			tn--;
		}
		else{//否则找到x,y路径上最大权的边并断开
            //id[u]记录了splay中u子树最大边的编号
			split(x,y);
//			cout<<2<<endl;
//			cout<<id[y]-n<<' '<<val[id[y]]<<endl;
			if(val[id[y]]<=val[i+n]) continue;
			int p=id[y];
			res+=val[i+n]-val[p];
			cut(u[p],p),cut(p,v[p]);
			link(x,i+n),link(i+n,y);
		}
	}
	for (int i = 1; i <= m; i++){
    cin>>u[i+n + m]>>v[i+n + m]>>val[i+n + m];
		int x=u[i+n + m],y=v[i+n + m];
		if(find(y)!=find(x)){//若未联通直接插入
//			cout<<1<<endl;
			link(x,i+n + m),link(i+n + m,y);
			res+=val[i+n + m];
			tn--;
		}
		else{//否则找到x,y路径上最大权的边并断开
            //id[u]记录了splay中u子树最大边的编号
			split(x,y);
//			cout<<2<<endl;
//			cout<<id[y]-n<<' '<<val[id[y]]<<endl;
			if(val[id[y]]<=val[i+n]) continue;
			int p=id[y];
			res+=val[i+n + m]-val[p];
			cut(u[p],p),cut(p,v[p]);
			link(x,i+n + m),link(i+n + m,y);
		}
    cout << res << '\n';
  }
  return 0;
}