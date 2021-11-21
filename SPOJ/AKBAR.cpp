#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
vector<int>g[limit];
int vis[limit],ok;
int root,stn;

void dfs(int u,int lev)
{
    if(ok==0 ||(vis[u] && vis[u]!=root) )
    {
        ok = 0;  return;
    }
    vis[u]=root;
          // cout <<root<<" root ct "<<ct[root]<<endl;
    if(stn==lev) return ;
    for(int v:g[u])
    {
        if(vis[v]!=root)
            dfs(v,lev+1);
    }
}

void solve(int t)
{
    int i,j,n,r,m,u,v;
    ok = 1;
    for(i=0; i<limit; i++)
    {
        g[i].clear();
        vis[i]=0;
    }
    scanf("%d %d %d",&n,&r,&m);
    for(i=0; i<r; i++)
    {
        scanf("%d %d",&u,&v);
        g[u].pb(v);
        g[v].pb(u);
    }
    for(i=0; i<m; i++)
    {
        scanf("%d %d",&root,&stn);
        dfs(root,0);
    }
    if(ok)
        printf("Yes\n");
    else
        printf("No\n");
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

