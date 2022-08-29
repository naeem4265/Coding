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

struct stt
{
    ll v,a,b;
};

vector<stt> g[limit];
ll height[limit],st[limit][20], suma[limit],sumb[limit];

///LCA build O(n*logn)
void st_build(ll u,ll p)
{
    for(stt node: g[u])
    {
        if(node.v==p)  continue;
        height[node.v] = height[u] + 1;
        suma[node.v] = suma[u]+node.a;
        sumb[node.v] = sumb[u]+node.b;
        st[node.v][0] = u;

        for(ll j=1; j<20; j++)
        {
            st[node.v][j] = st[st[node.v][j-1]][j-1];
        }
        st_build(node.v,u);
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
    ll i,j,n,m,k,a,b,p;
    ll u,v;
    cin >> n;

    for(i=0; i<n+5; i++)
    {
        height[i] = 0;
        suma[i] = sumb[i] = 0;
        g[i].clear();
        for(j=0; j<20; j++)
        {
            st[i][j] = 0;
        }
    }

    for(i=2; i<=n; i++)
    {
        cin >> p >> a >> b;
        g[i].pb({p,a,b});
        g[p].pb({i,a,b});
    }
    st_build(1,0);
    for(i=2; i<=n; i++)
    {
        ll l=0,h=height[i];
        ll ans = 0;
        while(l<=h)
        {
            ll m = (l+h)/2;
            ll dis = height[i]-m;
            ll v=i;
            for(ll j=19; j>=0; j--)
            {
                if( dis&(1<<j) )
                    v = st[v][j];
            }
            if(suma[i]>=sumb[v])
            {
                l = m+1;
                ans = m;
            }
            else
            {
                h = m-1;
            }
        }
        cout << ans <<" ";
    }
    cout <<endl;
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
