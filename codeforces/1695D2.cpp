#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200008
using namespace std;
bool vis[limit];
vector<ll> g[limit],g2[limit];

void dfs(ll u)
{
    vis[u] = 1;
    for(ll v: g[u])
    {
        if(vis[v])  continue;
        g2[u].pb(v);
        dfs(v);
    }
}

ll mn[limit];

ll rec(ll u)
{
    vis[u] = 1;
    mn[u] = 0;
    ll sz = g2[u].size();
    ll ct = max(0LL,sz-1);
    for(ll v: g2[u])
    {
        if(vis[v]) continue;
        mn[u] += rec(v);
        if(mn[v])  ct--;
    }
    ct = max(0LL, ct);
    mn[u] += ct;   //cout <<u<<" "<<sz<<" "<<ct<<" "<<mn[u]<<endl;
    return mn[u];
}


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        g2[i].clear();
        vis[i] = 0;
        mn[i] = 0;
    }

    for(i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }

    if(n<3)
    {
        cout <<n-1<<endl;
        return ;
    }

    for(i=1; i<=n; i++)
    {
        if(g[i].size()>1)
        {
            dfs(i);
            break;
        }
    }

    for(j=0; j<n+5; j++)
    {
        vis[j] = 0;
    }
    cout << rec(i) <<endl;


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
        Please_AC(t);
    return 0;
}
