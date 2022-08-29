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
ll l[limit],r[limit];
ll ans;

ll dfs(ll u)
{
    if(g[u].size()==0)
    {
        ans++;
        return r[u];
    }

    bool ok = 0;
    ll temp = 0;
    for(ll v: g[u])
    {
        temp += dfs(v);
    }
    if(temp<l[u])
    {
        ans++;
        temp = r[u];
    }
    temp = min(temp, r[u]);
    return temp;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ans = 0;
    for(i=0; i<=n+5; i++)
    {
        g[i].clear();
    }

    for(i=2; i<=n; i++)
    {
        ll u;
        cin >> u;
        g[u].pb(i);
    }
    for(i=1; i<=n; i++)
    {
        cin >> l[i] >> r[i];
    }

    dfs(1);
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
        Please_AC(t);
    return 0;
}
