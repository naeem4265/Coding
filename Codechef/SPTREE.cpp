#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

ll special[limit];
vector<ll>g[limit],tg[limit];
ll dis[limit],ans[limit];

ll dfs(ll u,ll pr,ll lev)
{
    for(ll v:g[u])
    {
        if(v==pr) continue;
        tg[v].pb(u);
        ans[u] = max(ans[u],dfs(v,u,lev+1));
    }
    dis[u] = lev;
    if(special[u]) ans[u] = u;       // if(ok[u]) cout <<u<<" paici "<<ans[u]<<endl;
    return ans[u];
}

void dfs2(ll u)
{
    if(ans[u]!=-1)
    {
        return ;
    }
    ll v = tg[u][0];
    dfs2(v);
    dis[u] = dis[v] - 1;
    ans[u] = ans[v];
}

void solve(ll t)
{
    ll i,j,n,m,k,a;
    string s;
    cin >> n >> k >> a;

    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        tg[i].clear();
        special[i] = 0;
        dis[i] = 0;
        ans[i] = -1;
    }

    ll u,v;
    for(i=0; i<k; i++)
    {
        cin >> u;
        special[u] = 1;
    }

    for(i=1; i<n; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }

    dis[0] = -1;
    dfs(a,0,0);

    for(i=1; i<=n; i++)
    {
        if(ans[i]==-1)
            dfs2(i);
    }
    for(i=1; i<=n; i++)
    {
        cout << dis[i] <<" ";
    }
    cout <<endl;
    for(i=1; i<=n; i++)
    {
        cout << ans[i] <<" ";
    }
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

