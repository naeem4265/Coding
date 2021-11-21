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
vector<ll> g[limit];
ll m,ct,a[limit];

ll dfs(ll pr, ll u)
{
    ll y = a[u];
    for(ll v: g[u])
    {
        if(v==pr) continue;
        ll x = dfs(u,v);    //cout <<u<<" "<<v<<" "<<x<<endl;
        if(x==m) ct++;
        else
            y = y^x;
    }
    return y;
}

void solve(ll t)
{
    ll i,j,n,k;
    string s;
    cin >> n >> k;
    m = 0; ct = 0;
    for(i=0; i<=n; i++)
    {
        g[i].clear();
    }

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
        m = m^a[i];
    }
    for(i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(0, 1);    //cout <<m<<" "<<ct<<endl;

    if(m==0 || (ct>=2 && k>2))
        cout <<"YES\n";
    else
        cout <<"NO\n";

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
