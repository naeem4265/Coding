#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll ans;
vector<ll> g[limit];
ll vis[limit];

void dfs2(ll u)
{         // cout <<u<<" ans "<<ans<<endl;
    ans++;
    vis[u]++;
    ll v = g[u][0];
    if(vis[v]==1)
        dfs2(v);
}

void dfs(ll u)
{          //cout <<u<<" dfs1 "<<vis[u]<<" "<<g[u][0]<<" "<<vis[g[u][0]]<<endl;
    vis[u]++;
    ll v = g[u][0];
    if(vis[v]==1)
    {
        dfs2(v);
        return ;
    }
    if(vis[v]==0)
        dfs(v);
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        vis[i] = 0;
    }
    ans = 0;

    for(i=0; i<n; i++)
    {
        ll a;
        cin >> a;
        g[i].pb((i+a+1)%n);
    }
    for(i=0; i<n; i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
        vis[i] = 5;
    }
    cout << ans <<endl;
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
