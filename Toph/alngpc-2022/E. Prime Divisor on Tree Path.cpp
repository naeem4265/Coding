#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 100002
using namespace std;
ll idx[limit],x[100008],sz;
vector<ll> g[100008];

bool vis[limit];
vector<ll>prime;
void seive()
{
    vis[0]=vis[1]=1;
    for(ll i=4; i<limit; i+=2) vis[i] = 1;
    for(ll i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(ll j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
    prime.pb(2);
    for(ll j=3; j<limit; j+=2)
        if(vis[j]==0)
            prime.pb(j);
}

ll height[limit],st[limit][20];
ll pcsum[limit];

void dfs(ll u,ll pr)
{
    height[u] = height[pr]+1;
    st[u][0] = pr;
    for(ll j=0; j<sz; j++)
    {
        ll t = x[u],p = prime[u], ct = 0;
        while(t%p==0)
        {
            t /= p;
            ct++;
        }
        pcsum[u] = pcsum[pr];
    }
    for(ll j=1; j<20; j++)
    {
        st[u][j] = st[st[u][j-1]][j-1];
    }
    for(ll v: g[u])
    {
        if(v==pr)   continue;
        dfs(v,u);
    }
}
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
    ll i,j,p,n,q,u,v,d;
    cin >> p >> n >> q;
    for(i=1; i<=p; i++)
    {
        cin >> d;
        idx[d] = i;
    }
    for(i=1; i<=n; i++)
    {
        cin >> x[i];
    }
    for(i=1; i<n; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    while(q--)
    {
        ll p1,p2;
        cin >> p1 >> p2 >> u >> v;
        if(height[u]>height[v])  swap(u,v);
        ll lca = LCA(u,v);
        if(lca==u)
        {

        }
        else
        {

        }
    }

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    seive();
    sz = prime.size();  cout <<sz<<" "<<prime[sz-1]<<endl;
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
