#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("case17.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200008
using namespace std;

vector<pair<ll,ll > > g[limit];
bool vis[limit];
ll ans,mx;

priority_queue<pair<ll,ll> > pq;

void prims(ll u)
{
    vis[u] = 1;
    pair<ll,ll> x;
    for(ll i=0; i<g[u].size(); i++)
    {
        x = g[u][i];
        if(vis[x.second]) continue;

        pq.push(x);
    }
    while( !pq.empty() )
    {
        x = pq.top();
        pq.pop();

        ll u = x.second;
        if( vis[u] )
        {
            continue;
        }

        vis[u] = 1;
        ll w = -x.first;
        ans += w;
        if( mx<w )
            mx = w;

        for(ll i=0; i<g[u].size(); i++)
        {
            x = g[u][i];
            if(vis[x.second]) continue;

            pq.push(x);
        }
    }
}

void solve(ll t)
{
    ll i,j,n,m,k;

    cin >> n >> m;
    for(i=0; i<m; i++)
    {
        ll u,v,w;
        cin >> u >> v >> w;
        g[u].pb({-w,v});
        g[v].pb({-w,u});
    }

    ll ct = -1;
    for(i=1; i<=n; i++)
    {
        if(vis[i]) continue;

        ct++;
        prims(i);
    }
    cout << ans + mx*ct <<endl;
    return ;
}
int  main()
{
//    Fast
 //   Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
