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
void LCA(ll u, ll v)
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
    if(u==v)
    {
        cout <<u<<" 2"<<endl;
        return ;
    }
    for(ll j=19; j>=0; j--)
    {
        if(pt[u][j]!=pt[v][j])
        {
            u = pt[u][j];
            v = pt[v][j];
        }
    }
    cout <<pt[u][0]<<" 3"<<endl;
    return ;
}


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    ll u,v;
    cin >> n >> q;
    for(i=1; i<n; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }

    for(i=0; i<=n; i++)
    {
        for(j=0; j<20; j++)
            pt[i][j] = 1;
    }

    height[0] = 1;
    pt_build(1,1);
    while(q--)
    {
        cin >> u >> v;
        LCA(u,v);
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
