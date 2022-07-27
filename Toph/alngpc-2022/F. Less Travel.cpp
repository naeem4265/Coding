#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200005
using namespace std;
vector<pair<ll,ll> > g[limit];
ll up[limit],mxdis[limit];

ll dfs1(ll u,ll pr,ll w)
{
    up[u] = 0;
    for(pair v: g[u])
    {
        if(v.first==pr)  continue;
        up[u] = max(up[u], dfs1(v.first, u, v.second));
    }
    return up[u]+w;
}
void dfs2(ll u,ll pr,ll w)
{
    if(w>=up[u])
    {
        mxdis[u] = w;
        for(pair v: g[u])
        {
            if(v.first==pr)  continue;
            dfs2(v.first, u, w+v.second);
        }
        return;
    }
    ll mx = w;
    mxdis[u] = up[u];
    for(pair v: g[u])
    {
        if(v.first==pr)  continue;
        if(up[u]==(up[v.first]+v.second))  continue;
        mx = max(mx, up[v.first]+v.second);
        dfs2(v.first, u, up[u]+v.second);
    }
    for(pair v: g[u])
    {
        if(up[u]==(up[v.first]+v.second))
        {
            dfs2(v.first, u, mx+v.second);
        }
    }
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n >> q;
    ll c[q+5];
    for(i=0; i<q; i++)  cin >> c[i];
    ll ans = 0;
    ll u,v,w;
    for(i=1; i<n; i++)
    {
        cin >> u >> v >> w;
        g[u].pb({v,w});
        g[v].pb({u,w});
        ans += 2LL*w;
    }
    for(i=1; i<=n; i++)
    {
        if(g[i].size()==1)
        {
            u = i;
            break;
        }
    }
    dfs1(u,0,0);
    dfs2(u,0,0);
    for(i=0; i<q; i++)
    {
        cout << ans-mxdis[c[i]] ;
        if(i<q-1) cout <<" ";
        else    cout <<endl;
    }
    return ;
}


int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
