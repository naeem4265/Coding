#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 100008
using namespace std;
bool vis[limit];
ll d[limit];
ll cnt[limit];
ll ans;
vector<ll> g[limit];

void dfs(ll u, ll pr, ll mex)
{    //cout <<u<<" "<<pr<<" "<<mex<<" "<<d[u]<<endl;
    vis[d[u]] = 1;
    cnt[d[u]]++;
    while(vis[mex])
        mex++;
    if(ans<mex)   ans = mex;
    for(auto v: g[u])
    {
        if(v==pr)  continue;
        dfs(v, u, mex);
    }
    cnt[d[u]]--;
    if(!cnt[d[u]])
        vis[d[u]] = 0;
}


void Please_AC(ll tt)
{
    ll i,j,n;
    cin >> n;
    ll x;
    for(i=1; i<=n; i++)
    {
        cin >> x;
        if(x>=limit)
            d[i] = limit-1;
        else
            d[i] = x;
    }
    for(i=1; i<n; i++)
    {
        ll u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(1, 0, 0);
    cout << ans <<endl;

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
        Please_AC(t);
    return 0;
}

/*
11
0 2 2 3 3 10 1 3 4 6 5
1 2
1 3
2 4
3 5
3 8
5 6
5 7
8 9
9 10
9 11
*/
