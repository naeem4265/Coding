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

ll cnt,ct[1005];
vector<ll> g[1005];
bool vis[1005];

void dfs(ll u)
{
    cnt++;   // cout <<u<<" cnt "<<cnt<<endl;
    vis[u] = 1;
    for(ll v: g[u])
    {
        if(vis[v]==0)
            dfs(v);
    }
}

void dfs2(ll u)
{
    ct[u] = cnt;
    for(ll v: g[u])
    {
        if(ct[v]==0)
            dfs2(v);
    }
}

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n;


    for(i=0; i<n; i++)
    {
        ll u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    for(i=1; i<=1002; i++)
    {
        if(vis[i]==0)
        {
            cnt = -1;
            dfs(i);
            if(cnt)
                dfs2(i);
        }
    }
    for(i=1; i<=1002; i++)
    {
        if(ct[i])
        {
            cout <<ct[i]<<endl;
        }
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
