#include<bits/stdc++.h>
#define limit 100008

///DSU O(n)
int pr[limit];
int Find(int u)
{
    if(pr[u]==u) return u;
    return pr[u] = Find(pr[u]);
}
void dsu(int u,int v)
{
    pr[Find(v)] = Find(u);
}

int  main()
{
    int i,j,n,m,k,q;

    scanf("%d %d", &n, &q);
    for(i=0; i<=n; i++)    pr[i]=i;
    for(i=0; i<q; i++)
    {
        int type,u,v,x,y,time,L,R;
        scanf("%d %d",&u,&v);
        dsu(u,v);
    }
    return 0;
}

