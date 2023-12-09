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
ll height[limit],st[limit][20];

///LCA build O(n*logn)
void st_build(ll u,ll p)
{
    for(ll v: g[u])
    {
        if(v==p)  continue;
        height[v] = height[u] + 1;
        st[v][0] = u;
        for(ll j=1; j<20; j++)
        {
            st[v][j] = st[st[v][j-1]][j-1];
        }
        st_build(v,u);
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
            v = st[v][j];
    }
    if(u==v) return u;
    for(ll j=19; j>=0; j--)
    {
        if(st[u][j]!=st[v][j])
        {
            u = st[u][j];
            v = st[v][j];
        }
    }
    return st[u][0];
}


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    ll u,v;
    cin >> n;
    for(i=1; i<n; i++)
    {
        ll u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u].pb(v);
        g[v].pb(u);
    }
    memset(st, 0, sizeof(st));
    height[0] = 0;
    st_build(0,0);
    cin >> q;
    while(q--)
    {
        cin >> u >> v;
        u--;
        v--;
        ll dis = height[u]+height[v]-2LL*height[LCA(u,v)];   //cout <<height[u]<<" "<<height[v]<<" "<<LCA(u,v) <<endl;
        if(dis&1)
            cout <<"No\n";
        else
            cout <<"Yes\n";
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
