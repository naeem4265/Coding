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
int dis[limit],parent[limit];
bool vis[limit];
int mx=0,ind=0,ct;
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    vis[u]=1;
    dis[u]=0;
    parent[u] = 0;
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        int v,i,sz=g[u].size();
        for(i=0; i<sz; i++)
        {
            v = g[u][i];
            if(vis[i]==0)
            {
                q.push(v);
                vis[v] = 1;
                dis[v] = dis[u]+1;
                parent[v] = u;
            }
        }
    }
}
void bfs2(int u,int x)
{
    vis[u]=1;
    if(x==ct)
    {
        cout <<
    }
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        int i,sz=g[u].size(),v;
        for(i=0; i<sz; i++)
        {
            v = g[u][i];
            if(vis[v]==0)
            {

            }
        }
    }
}
void solve(int t)
{
    int i,j,n,m;
    cin >> n;
    for(i=0; i<=n; i++)
    {
        g[i].clear();
    }
    for(i=0; i<n ;i++)
    {
        int u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    bfs(1);
    u = 1;
    for(i=1; i<=n; i++)
    {
        if(dis[u]<dis[i])
            u = i;
    }
    memset(vis,0,sizeof((n+1)*(bool)));
    bfs(u);
    for(i=1; i<=n; i++)
    {
        if(dis[v]<dis[i])
            v = i;
    }
    if(dis[v]%2==0)
    {
        for(i=q; i<=n; i++)
        {
            if(g[i].size())
            {
                cout <<i<<" "<<g[0]<<endl;
                cout <<i<<" "<<g[0]<<endl;
                return ;
            }
        }
    }
    ct = dis[v]/2;
    bfs(u,0);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

