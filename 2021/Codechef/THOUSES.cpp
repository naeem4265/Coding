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

vector<ll> g[limit],child[limit];
bool vis[limit];
ll ans;

ll dfs(ll u)
{
    vis[u] = 1;
    ll sz = g[u].size();
    if(sz==1 && u!=1) return 1;
    for(ll i=0; i<sz; i++)
    {
        ll v = g[u][i];
        if(vis[v])   continue;
        ll x = dfs(v);             //cout << u <<" "<<v<<" "<< x <<endl;
        child[u].pb(x);
    }
    sort(child[u].begin(), child[u].end());
    ll x = 1;
    for(ll i=child[u].size()-1,j=1; i>=0; i--,j++)
    {
        x += (child[u][i]*j);
    }       //cout << u << " "<< x << endl;
    return x;
}

void solve(ll t)
{
    ll i,j,n,m,x;

    cin >> n >> x;

    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        child[i].clear();
        vis[i] = 0;
    }

    for(i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }

    ans = dfs(1)%Mod;
    ans = (ans*x)%Mod;

    cout << ans << endl;
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
