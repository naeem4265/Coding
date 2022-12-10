#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e5+5;
const ll Mod = 1e9+7;
using namespace std;

vector<ll> g[limit];

ll dp[limit];
ll rec(ll u)
{
    if(dp[u]!=-1)   return dp[u];
    dp[u] = 0;
    for(auto v: g[u])
    {
        dp[u] = max(dp[u], 1+rec(v));
    }
    return dp[u];
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> m;
    for(i=1; i<=m; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
    }
    memset(dp, -1, sizeof(dp));
    ll ans = 0;
    for(i=1; i<=n; i++)
    {
        rec(i);
        ans = max(ans, dp[i]);
    }
    cout << ans <<endl;
    return ;
}


int  main()
{
    Fast
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

