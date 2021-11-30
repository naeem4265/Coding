#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 2005
using namespace std;
bool vis[limit],vis2[limit];
ll ans[limit][5+limit/60];
vector<int> g[limit];
int n;
void dfs(int u)
{
    vis[u] = 1;
    for(int v:g[u])
    {
        ans[u][v/60] = ans[u][v/60] | (1<<(v%60));
        if(!vis[v])
        {
            vis[v] = 1;
            dfs(v);
        }
        for(int j=0; j<1+limit/60; j++)
            ans[u][j] = ans[u][j] | ans[v][j];
    }
}
void dfs2(int u)
{
    vis2[u] = 1;
    for(int v:g[u])
    {
        ans[u][v/60] = ans[u][v/60] | (1<<(v%60));
        if(!vis2[v])
        {
            vis2[v] = 1;
            dfs2(v);
        }
        for(int j=0; j<1+limit/60; j++)
            ans[u][j] = ans[u][j] | ans[v][j];
    }
}
void solve(int t)
{
    int i,j,m;
    scanf("%d",&n);
    char s[n+5];
    for(i=0; i<=n; i++)
    {
        vis[i]=0;
        g[i].clear();
        for(j=0; j<1+limit/60; j++)
            ans[i][j] = 0;
    }
    for(i=0; i<n; i++)
    {
        scanf("%s",s);
        for(j=0; j<n; j++)
        {
            if(i==j) continue;
            if(s[j]=='1')
                g[i].pb(j);
        }
    }

    for(i=0; i<n; i++)
    {
        ans[i][i/60] = ans[i][i/60] | (1<<(i%60));
        if(vis[i]==0)
        {
            dfs(i);
            memset(vis2,0,sizeof(vis2));
            dfs2(i);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d",(ans[i][j/60]&(1<<(j%60)))?1:0);
        }
        printf("\n");
    }
    return ;
}
int  main()
{
 //   Fast
//    Freed
//    Fout
    int t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


