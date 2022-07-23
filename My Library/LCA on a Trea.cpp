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
ll height[limit],pt[limit][20];

///LCA build O(n*logn)
void pt_build(ll u,ll p)
{
    for(ll v: g[u])
    {
        if(v==p)  continue;
        height[v] = height[u] + 1;
        pt[v][0] = u;
        for(ll j=1; j<20; j++)
        {
            pt[v][j] = pt[pt[v][j-1]][j-1];
        }
        pt_build(v,u);
    }
}

///LCA query O(logn)
ll LCA(ll u, ll v)
{
    if(height[u]>height[v])
        swap(u,v);
    ll dis = height[v]-height[u];
    /// make height u,v same
    for(ll j=19; j>=0; j--)
    {
        if( dis&(1<<j) )
            v = pt[v][j];
    }
    if(u==v) return u;
    for(ll j=19; j>=0; j--)
    {
        if(pt[u][j]!=pt[v][j])
        {
            u = pt[u][j];
            v = pt[v][j];
        }
    }
    return pt[u][0];
}


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    ll u,v;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> m;
        for(j=0; j<m; j++)
        {
            cin >> v;
            g[i].pb(v);
            g[v].pb(i);
        }
    }
    memset(pt, 0, sizeof(pt));
    height[0] = 0;
    pt_build(0,0);
    cin >> q;
    while(q--)
    {
        cin >> u >> v;
        cout << LCA(u,v) <<endl;
    }
    return ;
}

///spoj LCASQ
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
 //   cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
