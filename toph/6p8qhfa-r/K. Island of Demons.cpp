#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

vector<ll> g[limit];
bool vis[limit];

void dfs(ll u)
{
    if(vis[u])  return ;
    vis[u] = 1;
    for(ll v: g[u])
    {
        dfs(v);
    }
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    scanf("%d %d", &n, &m);
    ll ind[n+5];
    for(i=0; i<=n+2; i++)
    {
        ind[i] = 0;
        vis[i] = 0;
        g[i].clear();
    }
    for(i=0; i<m; i++)
    {
        ll u,v;
        scanf("%d %d", &u, &v);
        g[u].pb(v);
        ind[v]++;
    }

    for(i=1; i<=n; i++)
    {
        if(ind[i]==0)
        {
            dfs(i);
            for(j=1; j<=n; j++)
            {
                if(vis[j]==0)
                {
                    printf("Case #%d: Doomed!\n", tt);
                    return ;
                }
            }
            printf("Case #%d: The desired island is %d\n",tt, i);
            return ;
        }
    }
    return ;
}


int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%d", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
