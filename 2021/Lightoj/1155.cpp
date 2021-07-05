#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 208
using namespace std;
ll ans;
ll st,ed;

vector<ll> g[limit];
bool vis[limit];
ll cost[limit][limit];

ll dfs(ll u,ll w)
{                        //cout << u<<"->";
    if(u==ed)
    {
        ans += w;   //cout <<" paici "<<w<<" "<<ans<<endl;
        return w;
    }
    vis[u]=1;
    for(ll v: g[u])
    {
        if(vis[v] || cost[u][v]==0) continue;
        ll x = dfs(v,min(w,cost[u][v]));
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
    ll i,j,n,m,c;
    //cin >> n;
    scanf("%d", &n);

    ans = 0;
    for(i=0; i<2*n+5; i++)
    {
        g[i].clear();
    }

    for(i=1; i<=n; i++)
    {
        ll costnode;
        scanf("%d", &costnode);
        g[i].pb(i+n);
        g[i+n].pb(i);
        cost[i][i+n] = costnode;
        cost[i+n][i] = 0;
    }
    //cin >> s >> t >> c;
    scanf("%d", &c);
    for(i=0; i<c; i++)
    {
        ll u,v,w;
        //cin >> u >> v >> w;
        scanf("%d %d %d", &u, &v, &w);
        g[u+n].pb(v);
        g[v].pb(u+n);
        cost[u+n][v] = w;
        cost[v][u+n] = 0;
    }
    st = 0;
    ed = 2*n+1;

    scanf("%d %d", &c, &m);
    for(i=0; i<c; i++)
    {
        ll u,v,w;
        //cin >> u >> v >> w;
        scanf("%d", &v);
        g[st].pb(v);
        g[v].pb(st);
        cost[st][v] = Mod;
        cost[v][st] = 0;
    }
    for(i=0; i<m; i++)
    {
        ll u,v,w;
        //cin >> u >> v >> w;
        scanf("%d", &v);
        g[v+n].pb(ed);
        g[ed].pb(v+n);
        cost[v+n][ed] = Mod;
        cost[ed][v+n] = 0;
    }

    while(1)
    {
        for(i=0; i<2*n+5; i++)
        {
            vis[i] = 0;
        }
        if(dfs(st,Mod)==0)
        {
            //cout << ans << endl;
            printf("Case %d: %d\n",tt,ans);
            return;
        }         //cout <<" completed\n";
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

