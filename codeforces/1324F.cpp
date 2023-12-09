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
#define limit 200008
using namespace std;
ll ct[limit];
ll ans[limit];
bool a[limit];
vector<ll> g[limit];

ll dfs(ll u,ll pr)
{
    ll sum = -1;
    if(a[u]==1)
        sum = 1;
    for(ll v: g[u])
    {
        if(v!=pr)
        {
            sum += dfs(v, u);
        }
    }
    if(sum<0) sum = 0;   //cout <<u<<" "<<sum<<endl;
    return ct[u] = sum;
}

void dfs2(ll u,ll pr)
{
    ll sum = -1;
    if(a[u])
        sum = 1;
    for(ll v: g[u])
    {
        sum += ct[v];
    }
    ans[u] = sum;  // cout <<u<<" "<<sum<<endl;
    for(ll v: g[u])
    {
        if(v!=pr)
        {
            ct[u] = max(0LL, sum-ct[v]);
            dfs2(v, u);
        }
    }
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n ;
    for(i=1; i<=n; i++)
        cin >> a[i];
    for(i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    for(i=1; i<=n; i++)
    {
        if(g[i].size()==1)
        {
            dfs(i,0);
            ct[0] = 0;
            dfs2(i,0);
            for(i=1; i<=n; i++)
                cout << ans[i]<<" ";
            cout <<endl;
            return ;
        }
    }
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
