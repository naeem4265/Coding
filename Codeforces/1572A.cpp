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
char vis[limit];
vector<ll> g[limit];
ll dp[limit];

ll dfs(ll u)
{            //cout <<u<<" "<<ct<<" "<<vis[u]<<endl;
    if(vis[u]=='g')   return Mod;
    if(vis[u]=='b')   return dp[u];
    vis[u] = 'g';
    ll mx=1;
    for(ll v: g[u])
    {
        if(v<u)
            mx = max(mx,dfs(v)+1);
        else
            mx = max(mx,dfs(v));
    }
    vis[u] = 'b';
    return dp[u] = mx;
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        vis[i] = 'w';
        dp[i] = 0;
    }
    for(i=1; i<=n; i++)
    {
        cin >> m;
        for(j=0; j<m; j++)
        {
            cin >> k;
            g[k].pb(i);
        }
    }
    ll mx = 1;
    for(i=n; i>0; i--)
    {
        mx = max(mx, dfs(i));
    }
    if(mx>=Mod) mx=-1;
    cout << mx <<endl;
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
