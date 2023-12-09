#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200008
using namespace std;

vector<pair<ll,ll> > g[limit];
bool vis[limit];
ll bit;

void dfs(ll u)
{
    vis[u] = 1;   //cout <<u<<" paici \n";
    for(ll i=0; i<g[u].size(); i++)
    {
        ll v = g[u][i].first, w = g[u][i].second;
        if(vis[v] || (w&bit) )   continue;
        dfs(v);
    }
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n >> m;

    for(i=0; i<=n; i++)
    {
        g[i].clear();
    }

    for(i=0; i<m; i++)
    {
        ll u,v,w;
        cin >> u >> v >> w;
        g[u].pb({v,w});
        g[v].pb({u,w});
    }
    ll ans = 0;
    bit = 0;
    k = 1LL << 32LL;
    for(i=32; i>=0; i--)
    {
        bit += k;
        for(j=1; j<=n; j++)
        {
            vis[j] = 0;
        }
        dfs(1);
        for(j=1; j<=n; j++)
        {
            if(vis[j]==0) break;
        }
        if(j<=n)
        {
            bit -= k;
            ans += k;
        }           //cout <<i<<" "<<k<<" "<<bit<<" "<<ans<<" "<<j<<endl;
        k = k>>1;
    }
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
