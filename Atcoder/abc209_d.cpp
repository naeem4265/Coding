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
vector<ll>g[limit];
ll dis[limit];

void dfs(ll u)
{
    for(ll v: g[u])
    {
        if(dis[v]==-1)
        {
            dis[v] = dis[u] + 1;
            dfs(v);
        }
    }
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m;
    memset(dis,-1,sizeof(dis));
    for(i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dis[1] = 0;
    dfs(1);
    for(i=0; i<m; i++)
    {
        ll u,v;
        cin >> u >> v;
        if((dis[u]+dis[v])&1)
            cout <<"Road\n";
        else
            cout <<"Town\n";
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
        solve(t);
    return 0;
}
