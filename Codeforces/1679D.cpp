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
bool vis[limit],vis2[limit];
ll dp[limit];

ll dfs(ll u)
{
    if(vis[u])  return -1;
    if(dp[u])
        return dp[u];
    if(vis2[u])
        return Mod;
    vis2[u] = 1;
    ll x = 0;
    for(ll v: g[u])
    {
        x = max(x, dfs(v)+1);
    }
    vis2[u] = 0;
    return dp[u]=x;
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> m >> k;
    k--;

    ll d[n+5];
    for(i=1; i<=n; i++)
        cin >> d[i];
    for(i=0; i<m; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
    }
    ll l=1, r=Mod, ans = -1;
    while(l<=r)
    {
        m = (l+r)/2;
        for(i=1; i<=n; i++)
        {
            if(d[i]<=m)
            {
                vis[i] = 0;
                dp[i] = 0;
            }
            else
            {
                vis[i] = 1;
                dp[i] = -1;
            }
            vis2[i] = 0;
        }
        for(i=1; i<=n; i++)
            dfs(i);
        for(i=1; i<=n; i++)
        {
            if(dp[i]>=k || dp[i]>=limit)
            {
                ans = m;
                r = m-1;
                break;
            }
        }
        if(i>n)
        {
            l = m+1;
        }   //cout <<l<<" "<<r<<" "<<m<<' '<<ans<<" "<<k<<endl;
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
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
