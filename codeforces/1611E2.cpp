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
#define limit 1000008
using namespace std;

bool vis[limit];
vector<ll> g[limit],ggg[limit];
ll dis[limit];

ll dfs(ll pr,ll u)
{
    if(vis[u])  return dis[u] = 0;
    if(dis[u]!=-1)   return dis[u];
    ll x = Mod;
    for(ll v: g[u])
    {
        if(v==pr) continue;
        ggg[u].pb(v);
        x = min(x,dfs(u,v)+1);
    }
    return dis[u] = x;
}

ll dfs3(ll u,ll ct)
{      //cout <<u<<" "<<ct<<" "<<dis[u]<<endl;
    if(dis[u]<=ct)   return 1;
    if(u!=1 && ggg[u].size()==0)   return -Mod;
    ll x = 0;
    for(ll v: ggg[u])
    {
        x += dfs3(v,ct+1);
    }      // cout <<u<<" "<<x<<endl;
    return x;
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n >> m;

    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        ggg[i].clear();
        dis[i] = -1;
        vis[i] = 0;
    }

    ll x;
    for(i=0; i<m; i++)
    {
        cin >> x;
        vis[x] = 1;
    }
    for(i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(0,1);

    ll ans = max(-1LL,dfs3(1,0));
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
