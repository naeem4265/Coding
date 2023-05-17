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
        st_build(v, u);
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
    cin >> n  >>  q;
    //scanf("%d %d", &n, &q);
                //**** memset(st, 0, sizeof(st));
    for(i=0;  i<=n+4; i++)
    {
        for(j=0; j<20;  j++)
        {
            st[i][j]  = 1;
        }
        g[i].clear();
    }

    for(i=1; i<n; i++)
    {
        cin  >>  u  >>  v;
        //scanf("%d %d", &u, &v);
        g[u].pb(v);
        g[v].pb(u);
    }

    height[0] = 0;
    height[1] = 0;
    st_build(1, 0);

    while(q--)
    {
        cin  >> k;
        //scanf("%d", &k);
        ll  temp = 1,dis=0;
        for(i=0;   i<k;  i++)
        {
            cin  >>  v;
            //scanf("%d", &v);
            if(i==0)     temp  =  v;
            temp =  LCA(temp, v);
            if(dis<height[v])   dis  =  height[v];
        }
        cout << dis-height[temp]  <<endl;
        //printf("%d\n",  dis-height[temp]);
    }
    return ;
}


int  main()
{
   // Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    //scanf("%d", &tt);
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}
