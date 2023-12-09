#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 100008
using namespace std;
ll n,a,b;
vector<pair<ll,ll> > g[limit];
map<ll,bool> mp;

void dfs(ll u,ll pr, ll x)
{
    for(auto v: g[u])
    {
        if(v.first!=pr)
        {
            mp[x^v.second] = 1;
            dfs(v.first, u, x^v.second);
        }
    }
}

bool trav(ll u, ll pr, ll x)
{
    if(u==b)  return 0;
    if(mp[x])  return 1;
    bool ok = 0;
    for(auto v: g[u])
    {
        if(v.first!=pr)
        {
            ok = ok|trav(v.first, u, x^v.second);
        }
    }
    return ok;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> a >> b;

    mp.clear();
    for(i=0; i<=n; i++)
    {
        g[i].clear();
    }

    for(i=1; i<n; i++)
    {
        ll u,v,w;
        cin >> u >> v >> w;
        g[u].pb({v,w});
        g[v].pb({u,w});
    }
    dfs(b, -1, 0);
    if(trav(a, -1, 0))
        cout <<"YES\n";
    else
        cout <<"NO\n";
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

