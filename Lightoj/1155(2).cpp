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
ll ans;
ll s,t;

vector<ll> g[limit];
bool vis[limit];
ll cost[limit][limit],costnode[limit],costnodeout[limit][limit];

ll dfs(ll u,ll w)
{                        //cout << u<<"->";
    if(u==t)
    {
        ans += w;   //cout <<" paici "<<w<<" "<<ans<<endl;
        return w;
    }
    vis[u]=1;
    for(ll v: g[u])
    {
               //cout <<endl<<u<<" "<<v<<" "<<w<<" "<<costnode[u]<<" "<<cost[u][v]<<endl;
        if(vis[v] || cost[u][v]==0) continue;
        ll temp = 0;
        if( costnodeout[u][v]<0 ) temp = -costnodeout[u][v];
        if(temp+costnode[v]==0)
        {
            continue;
        }

        ll x = dfs(v,min({w,cost[u][v],temp+costnode[v]}));

        if(x)
        {
            if( costnodeout[u][v]<0 )
            {
                costnode[v] += x;
                costnode[u] += x;
            }
            cost[u][v] -= x;
            cost[v][u] += x;
            costnode[u] -= x;
            costnodeout[u][v] += x;
            costnodeout[v][u] -= x;
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
    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        costnode[i] = 0;
        for(j=0; j<n+5; j++)
        {
            cost[i][j] = 0;
            costnodeout[i][j] = 0;
        }
    }

    for(i=1; i<=n; i++)
    {
        scanf("%d", &costnode[i]);
    }
    //cin >> s >> t >> c;
    scanf("%d", &c);
    for(i=0; i<c; i++)
    {
        ll u,v,w;
        //cin >> u >> v >> w;
        scanf("%d %d %d", &u, &v, &w);
        g[u].pb(v);
        g[v].pb(u);
        cost[u][v] = w;
        cost[v][u] = 0;
    }
    s = 0;
    t = n+1;
    costnode[s] = costnode[t] = Mod;
    scanf("%d %d", &c, &m);
    for(i=0; i<c; i++)
    {
        ll u,v,w;
        //cin >> u >> v >> w;
        scanf("%d", &v);
        g[s].pb(v);
        g[v].pb(s);
        cost[s][v] = Mod;
        cost[v][s] = 0;
    }
    for(i=0; i<m; i++)
    {
        ll u,v,w;
        //cin >> u >> v >> w;
        scanf("%d", &v);
        g[v].pb(t);
        g[t].pb(v);
        cost[v][t] = Mod;
        cost[t][v] = 0;
    }

    while(1)
    {
        for(i=0; i<n+5; i++)
        {
            vis[i] = 0;
        }
        if(dfs(s,Mod)==0)
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

