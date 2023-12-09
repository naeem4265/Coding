#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


vector<pair<ll,ll> > g[limit];
ll ans;
 
ll dfs(ll u, ll pr, ll seq)
{
    ll cost = 0;
    for(auto v: g[u])
    {
        if(v.first==pr)  continue;
        if(seq > v.second)
            cost = max(cost,1 + dfs(v.first, u, v.second));
        else
            cost = max(cost, dfs(v.first, u, v.second));
    }
    return cost;
}
 
void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    for(i=0; i<=n; i++)
    {
        g[i].clear();
    }
    ans = 0;
 
    for(i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v;
        if(u>v)  swap(u,v);
        g[u].pb({v, i});
        g[v].pb({u, i});
    }
    ans = dfs(1, 0, Mod);
    cout << ans <<endl;
 
    return ;
}


int  main()
{
/*
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
*/
    Fast
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

