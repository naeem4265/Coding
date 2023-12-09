#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define limit 100008
using namespace std;
ll p[limit],mn[limit];
vector<ll> g[limit];

ll dfs(ll u)
{
    if(g[u].size()==0)
        return mn[u] = p[u];
    for(ll v: g[u])
    {
        mn[u] = min(mn[u], dfs(v));
    }
    return mn[u] = max(mn[u], p[u]);
}

ll rec(ll u, ll mx)
{
    if(g[u].size()==0)
        return mx;

    if(g[u].size()==1)
    {
        ll v = g[u][0];
        return rec(v, max(mx, p[v]));
    }


    ll m = g[u][0];
    for(ll v: g[u])
    {
        if(mn[m] > mn[v])
            m = v;
    }

    ll sum = 0;
    for(ll v: g[u])
    {
        ll t;
        if(v==m)
            t = rec(v, max(mx, p[v]));
        else
            t = rec(v, p[v]);
        sum += t;
    }
    return sum;
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    scanf("%lld", &n);
    for(i=0; i<=n+5; i++)
    {
        g[i].clear();
        p[i] = 0;
        mn[i] = 1e18;
    }

    for(i=1; i<=n; i++)
        scanf("%lld", &p[i]);
    for(i=1; i<=n; i++)
    {
        ll v;
        scanf("%lld", &v);
        g[v].pb(i);
    }
    dfs(0);

    ll ans = 0;
//    for(i=0; i<=n; i++)
//    {
//        cout <<i<<" "<<mn[i]<<endl;
//    }
    printf("Case #%lld: %lld\n", tt, rec(0, 0));

    return ;
}


int  main()
{
 //   Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
