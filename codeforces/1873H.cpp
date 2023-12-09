#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 2e5+5;
const ll Mod = 1e9+7;
using namespace std;
vector<ll> g[limit],cycle;
bool vis[limit];
ll father[limit];

void cyc(ll u, ll root)
{
    cycle.pb(u);
    if(u==root)  return;
    cyc(father[u], root);
}

void dfs(ll u, ll pr)
{
    vis[u] = 1;
    father[u] = pr;
    for(ll v: g[u])
    {
        if(v==pr)  continue;
        if(!cycle.empty())    return;
        if(vis[v])
            cyc(u, v);
        if(!cycle.empty())    return;
        dfs(v, u);
    }
}
pair<ll,ll> dfs2(ll u, ll pr)
{
    if(vis[u])    return {u, 0};
    pair<ll,ll> temp={0, Mod}, p;
    for(ll v: g[u])
    {
        if(v==pr)   continue;
        p = dfs2(v, u);
        if((p.second+1)<temp.second)
        {
            temp = p;
            temp.second++;
        }
    }
    return temp;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    ll a,b,u,v;
    cycle.clear();
    cin >> n >> a >> b;
    for(i=0; i<=n; i++)
    {
        g[i].clear();
        vis[i] = 0;
    }
    for(i=0; i<n; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(1, 0);
    for(i=0; i<=n; i++)
        vis[i] = 0;
    for(ll v: cycle)
    {
        vis[v] = 1;  //cout <<v<<" ";
    }
    if(vis[b] && a!=b)
    {
        cout <<"YES\n";
        return;
    }
    pair<ll,ll> disb, disa;
    disb = dfs2(b, 0);
    for(i=0; i<=n; i++)
        vis[i] = 0;
    vis[disb.first] = 1;
    disa = dfs2(a, 0);    // cout <<disa.first<<" "<<disa.second<<" "<<disb.first<<" "<<disb.second<<endl;
    if(disb.second<disa.second && a!=b)
        cout <<"YES\n";
    else
        cout <<"NO\n";

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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
