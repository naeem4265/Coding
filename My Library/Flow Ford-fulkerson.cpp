#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 108
using namespace std;
// lightoj 1153
ll flow;
ll source,destination;

///max flow Ford–Fulkerson, Time: atmost n*t <=300, memory: O(n*n)
vector<ll> g[limit];
bool vis[limit];
ll cost[limit][limit];
ll path(ll u,ll w)
{
    if(u==destination)
    {
        flow += w;
        return w;
    }
    vis[u]=1;
    for(ll v: g[u])
    {
        if(vis[v] || cost[u][v]==0) continue;
        ll x = path(v,min(w,cost[u][v]));
        if(x)
        {
            cost[v][u] += x;
            cost[u][v] -= x;
            return x;
        }
    }
    return 0;
}

void solve(ll tt)
{
    ll i,j,n,m,edge;
    //cin >> n;
    scanf("%d", &n);

    flow = 0;
    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        for(j=0; j<n+5; j++)
            cost[i][j] = 0;
    }

    scanf("%d %d %d", &source, &destination, &edge);
    for(i=0; i<edge; i++)
    {
        ll u,v,w;
        //cin >> u >> v >> w;
        scanf("%d %d %d", &u, &v, &w);
        g[u].pb(v);
        g[v].pb(u);
        cost[u][v] += w;
        cost[v][u] += w;
    }
    while(1)
    {
        for(i=0; i<n+5; i++)
        {
            vis[i] = 0;
        }
        if(path(source,Mod)==0)
        {
            printf("Case %d: %d\n",tt,flow);
            return;
        }
    }
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    scanf("%d", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

