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
#define limit 100008
using namespace std;
vector<ll> g[limit];
ll l[limit],r[limit],dp[limit][2];
bool vis[limit];

void rec(ll pr,ll v)
{
    vis[v] = 1;
    for(ll u: g[v])
    {
        if(pr==u)   continue;
        if(vis[u]==0)
            rec(v,u);
        dp[v][0] += max(dp[u][0]+abs(l[v]-l[u]),dp[u][1]+abs(l[v]-r[u]));
        dp[v][1] += max(dp[u][0]+abs(r[v]-l[u]),dp[u][1]+abs(r[v]-r[u]));
    }
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    ll u,v;
    scanf("%lld", &n);

    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        dp[i][0] = dp[i][1] = 0;
        vis[i] = 0;
    }

    for(i=1; i<=n; i++)
        scanf("%lld %lld", &l[i], &r[i]);

    for(i=1; i<n; i++)
    {
        scanf("%lld %lld", &u, &v);
        g[u].pb(v);
        g[v].pb(u);
    }

    rec(0,1);
    printf("%lld\n", max(dp[1][0],dp[1][1]));
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
