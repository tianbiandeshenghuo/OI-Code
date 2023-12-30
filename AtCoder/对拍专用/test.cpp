#include<cstdio>
#include<cstdlib>
#include<ctime>
const int N=2e5+10;
struct fhq_treap
{
    struct node
    {
        int l,r;
        int val;
        int key;
        int size;
    }t[N];
    int tot,root;
    #define ls t[k].l
    #define rs t[k].r
    int newnode(int val)
    {
        t[++tot].val=val;
        t[tot].key=rand()%114514191;
        t[tot].size=1;
        return tot;
    }
    void pushup(int k)
    {
        t[k].size=t[ls].size+t[rs].size+1;
    }
    void split(int k,int val,int &x,int &y)
    {
        if(!k) x=y=0;
        else
        {
            if(t[k].val<=val)
            {
                x=k;
                split(rs,val,rs,y);
            }
            else
            {
                y=k;
                split(ls,val,x,ls);
            }
            pushup(k);
        }
    }
    int merge(int x,int y)
    {
        if(!x||!y) return x+y;
        if(t[x].key>t[y].key)
        {
            t[x].r=merge(t[x].r,y);
            pushup(x);
            return x;
        }
        else
        {
            t[y].l=merge(x,t[y].l);
            pushup(y);
            return y;
        }
    }
    void add(int val)
    {
        int x,y;
        split(root,val,x,y);
        root=merge(merge(x,newnode(val)),y);
    }
    void del(int val)
    {
        int x,y,z;
        split(root,val,x,z);
        split(x,val-1,x,y);
        y=merge(t[y].l,t[y].r);
        root=merge(merge(x,y),z);
    }
    int getrank(int val)
    {
        int x,y;
        split(root,val-1,x,y);
        int res=t[x].size+1;
        root=merge(x,y);
        return res;
    }
    int getnum(int rank)
    {
        int k=root;
        while(k)
        {
            if(t[ls].size+1==rank) break;
            else if(t[ls].size>=rank) k=t[k].l;
            else
            {
                rank-=t[ls].size+1;
                k=rs;
            }
        }
        return t[k].val;
    }
    int pre(int val)
    {
        int x,y;
        split(root,val-1,x,y);
        int k=x;
        while(rs)
            k=rs;
        int res=t[k].val;
        root=merge(x,y);
        return res;
    }
    int nxt(int val)
    {
        int x,y;
        split(root,val,x,y);
        int k=y;
        while(ls)
            k=ls;
        int res=t[k].val;
        root=merge(x,y);
        return res;
    }
}tree;
int a[N];
int ans[N];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            tree.add(i);
            scanf("%d",&a[i]);
        }
        for(int i=n;i>=1;i--)
        {
            ans[i]=tree.getnum(i-a[i]);
            tree.del(ans[i]);
        }
        for(int i=1;i<=n;i++) printf("%d ",ans[i]);
        printf("\n");
    }
}