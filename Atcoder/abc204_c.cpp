#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 2008
using namespace std;
ll ans;
vector<ll> g[limit];
bool vis[limit];

void dfs(ll u)
{
    ans++;
    vis[u] = 1;
    for(ll v:g[u])
    {
        if(vis[v]) continue;
        dfs(v);
    }
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m;
    for(i=0; i<m; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
    }
    for(i=1; i<=n; i++)
    {
        memset(vis,0,sizeof(vis));
        dfs(i);
    }
    cout << ans << endl;
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

