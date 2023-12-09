#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
vector<ll> g[limit];
ll b[limit],w[limit];
string s;

void dfs(ll u)
{
    if(s[u-1]=='B')
        b[u]++;
    else
        w[u]++;
    for(ll v: g[u])
    {
        dfs(v);
        b[u] += b[v];
        w[u] += w[v];
    }
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;
    for(i=0; i<=n+4; i++)
    {
        b[i] = w[i] = 0;
        g[i].clear();
    }

    for(i=2; i<=n; i++)
    {
        ll v;
        cin >> v;
        g[v].pb(i);
    }
    cin >> s;
    dfs(1);
    ll ans = 0;
    for(i=1; i<=n; i++)
    {
        if(b[i]==w[i])
            ans++;
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
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
