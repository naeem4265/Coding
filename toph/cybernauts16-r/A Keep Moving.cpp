#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
vector<ll> g[limit];
ll vis[limit],done[limit];
bool ok;

void dfs(ll u,ll dis)
{
    if(g[u].size()==0)
    {
        if(dis) ok = 1;
    }
    vis[u] = 1;
    for(ll v: g[u])
    {
        if(vis[v] && done[v]==0)
        {
            continue;
        }
        else
            dfs(v, !dis);
    }
    done[u] = 1;
}
void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m >> k;

    ok = 0;
    memset(vis,-1,sizeof(vis));
    memset(done,-1,sizeof(done));
    for(i=0; i<n+5; i++)
        g[i].clear();

    for(i=0; i<m; i++)
    {
        ll u, v;
        cin >> u >> v;
        g[u].pb(v);
    }
    dfs(k,0);
    cout <<"Case "<<t<<": ";
    if(ok)
        cout <<"Yes\n";
    else
        cout <<"No\n";

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
