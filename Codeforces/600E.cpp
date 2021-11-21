#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;
vector<ll> g[limit];
ll col[limit];

ll sz[limit];
ll fre[limit],sum[limit],ans[limit];
bool big[limit];

ll Set(ll u,ll pr)
{
    sz[u] = 1;
    for(ll v: g[u])
    {
        if(v==pr) continue;
        sz[u] += Set(v,u);
    }
    return sz[u];
}
ll pos;
void add(ll u,ll pr)
{
    sum[fre[col[u]]] -= col[u];
    fre[col[u]]++;
    sum[fre[col[u]]] += col[u];
    if(pos < fre[col[u]]) pos = fre[col[u]];

    for(ll v: g[u])
    {
        if(v==pr || big[v])   continue;
        add(v,u);
    }
}
void del(ll u,ll pr)
{
    if(pos == fre[col[u]]) pos--;
    sum[fre[col[u]]] -= col[u];
    fre[col[u]]--;
    sum[fre[col[u]]] += col[u];

    for(ll v: g[u])
    {
        if(v==pr)   continue;
        del(v,u);
    }
}

ll dfs(ll u,ll pr,bool bigu)
{
    ll mx = 0,bigchild=-1;
    for(ll v: g[u])
    {
        if(v==pr) continue;
        if(mx < sz[v])
        {
            mx = sz[v];
            bigchild = v;
        }
    }
    for(ll v: g[u])
    {
        if(v==pr || v==bigchild) continue;
        dfs(v,u,0);
    }
    if(bigchild!=-1)
    {
        dfs(bigchild,u,1);
        big[bigchild] = 1;
    }
    add(u,pr);
    ans[u] = sum[pos];

    if(bigchild!=-1)
    {
        big[bigchild] = 0;
    }
    if(bigu==0)
        del(u,pr);
}

void solve(ll t)
{
    ll i,j,n,m,k;
    cin >> n;
    for(i=1; i<=n; i++)
        cin >> col[i];
    for(i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    Set(1,0);
    dfs(1,0,0);
    for(i=1; i<=n; i++)
    {
        cout << ans[i] <<" ";
    }
    cout << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
