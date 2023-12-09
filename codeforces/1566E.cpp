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

vector<ll> g[limit];
ll ans;

ll dfs(ll u,ll pr)
{
    ll ct=0;
    for(ll v: g[u])
    {
        if(v==pr) continue;
        ct += dfs(v,u);
    }

    if( ct )
    {
        ans += ct-1;      //cout <<u<<" "<<ct<<" "<<ans<<endl;
        return 0;
    }
    return 1;
}

void solve(ll t)
{
    ll i,j,n,m,k;

    cin >> n;

    ans = 1;
    for(i=0; i<=n+2; i++)
    {
        g[i].clear();
    }

    for(i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }

    //if(dfs(1,0)==0) ans++;
    dfs(1,0);

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
