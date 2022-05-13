#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200008
using namespace std;
vector<ll> g[limit];
ll gg[limit], x, y;
bool vis[limit];

void dfs(ll u)
{      //cout <<u<<" dfs "<<endl;
    vis[u] = 1;
    for(ll v: g[u])
    {      //cout <<u<<" "<<v<<' '<<vis[v]<<endl;
        if(vis[v])  continue;
        gg[v] = u;
        dfs(v);
    }
}
ll up(ll u)
{           //cout <<u<<endl;
    if(vis[u])
        return 0;
    vis[u] = 1;
    return 2+up(gg[u]);
}
ll des(ll u, ll cost)
{
    if(u==x)
        return cost;
    if(vis[u])
        cost -= 1;
    else
        cost += 1;
    return des(gg[u], cost);
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n >> k;
    ll a[n+5];
    cin >> x >> y;
    for(i=0; i<k; i++)  cin >> a[i];
    ll u,v;
    for(i=0; i<=n+2; i++)
    {
        g[i].clear();
        vis[i] = 0;
        gg[i] = 0;
    }
    for(i=1; i<n; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }       //cout <<x<<" here "<<y<<endl;
    dfs(x);
    for(i=0; i<=n+2; i++)
    {
        vis[i] = 0;
    }
    ll ans = 0;
    vis[x] = 1;
    for(i=0; i<k; i++)
    {
        ans += up(a[i]);       //cout <<i<<" pos "<<ans<<" "<<a[i]<<endl;
    }
    ans += des(y, 0);
    cout << ans <<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

