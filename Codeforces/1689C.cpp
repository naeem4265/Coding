#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 300008
using namespace std;

vector<ll> g[limit], g2[limit];
ll n,child[limit],dp[limit];

ll dfs(ll u, ll pr)
{
    child[u] = 0;
    for(ll v: g[u])
    {
        if(v==pr)  continue;
        g2[u].pb(v);
        child[u] += dfs(v, u);
    }
    return child[u]+1;
}

ll rec(ll u)
{
    if(g2[u].size()==0)
        return dp[u] = 0;
    if(g2[u].size()==1)
    {
        return dp[u] = child[g2[u][0]];
    }
    dp[u] = max( child[g2[u][0]] + rec(g2[u][1]), child[g2[u][1]] + rec(g2[u][0]) );
    return dp[u];
}

void solve(ll tt)
{
    ll i,j;
    cin >> n;
    for(i=0; i<n+2; i++)
    {
        g[i].clear();
        g2[i].clear();
        child[i] = 0;
        dp[i] = 0;
    }
    for(i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v ;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(1,0);
    rec(1);
    cout << dp[1] <<endl;


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
