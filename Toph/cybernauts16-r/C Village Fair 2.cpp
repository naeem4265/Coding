#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100005
using namespace std;
vector<ll>g[limit];
ll cost[limit],d[limit],sz[limit],ans[limit];
bool big[limit];

ll Set(ll u)
{
    sz[u] = 1;
    for(ll v: g[u])
    {
        sz[u] += Set(v);
    }
    return sz[u];
}

void update(ll u, ll sum)
{
    sum += cost[u];
    d[u] += sum;
    for(ll v: g[u])
    {
        update(v,sum);
    }
}

set<ll> st;

void add(ll u)
{
    st.insert(d[u]);
    for(ll v: g[u])
    {
        if(big[v]==0)
            add(v);
    }
}

void dfs(ll u, ll keep)
{
    ll mx=-1,bigchild = -1;

    for(ll v: g[u])
    {
        if(mx< sz[v])
        {
            mx = sz[v];
            bigchild = v;
        }
    }
    for(ll v: g[u])
    {
        if(v==bigchild) continue;
        dfs(v,0);
    }
    if(bigchild!=-1)
    {
        dfs(bigchild,1);
        big[bigchild] = 1;
    }
    add(u);

    ans[u] = st.size();
    if(bigchild!=-1)
    {
        big[bigchild] = 0;
    }
    if(keep==0) st.clear();
}


void solve(ll t)
{
    ll i,j,n,m,k,u,root=1;
    scanf("%lld", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld", &d[i]);
    }
    for(i=1; i<=n; i++)
    {
        scanf("%lld", &u);
        if(u!=0)
            g[u].pb(i);
        else
            root = i;
    }
    for(i=1; i<=n; i++)
    {
        scanf("%lld", &cost[i]);
    }
    cost[root] = 0;
    Set(root);
    update(root,0);
    dfs(root,0);
    //for(i=1; i<=n; i++)         printf("%lld ",d[i]); cout << endl;
   // printf("Case %d:\n",t);
    for(i=1; i<=n; i++)
    {
        printf("%lld\n",ans[i]);
        //cout <<ans[i] <<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    //scanf("%d", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
