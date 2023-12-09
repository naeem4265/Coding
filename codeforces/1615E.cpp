#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200008
using namespace std;

vector<ll> g[limit];
ll pr[limit],child[limit],ct,ct2;
bool vis[limit];
multiset<pair<ll,ll> > st;
multiset<pair<ll,ll> > :: iterator it;

ll dfs(ll u)
{
    child[u]++;
    for(ll v: g[u])
    {
        if(v==pr[u])   continue;
        pr[v] = u;
        child[u] += dfs(v);
    }
    return child[u];
}
void dfs2(ll u)
{
    vis[u] = 1;
    ll mx=0,node=0;
    for(ll v: g[u])
    {
        if(v==pr[u])   continue;
        if(mx<child[v])
        {
            mx = child[v];
            node = v;
        }
    }
    for(ll v: g[u])
    {
        if(v==pr[u] || v==node)   continue;
        st.insert({child[v],v});
    }
    if(node)   dfs2(node);
}

void solve(ll tt)
{
    ll i,j,n,k,u,v,m;

    cin >> n >> k;
    for(i=1; i<n; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    pr[1] = 0;
    dfs(1);
    for(i=0; i<g[1].size(); i++)
    {
        v = g[1][i];
        st.insert({child[v],v});
    }
    while(!st.empty() && k)
    {
        k--;
        ct++;
        it = st.end();
        it--;
        pair<ll,ll> z;
        z = *it;
        st.erase(it);
        dfs2(z.second);
    }
    if(k)
    {
        m = n/2;
        if(ct<m)
            ct = min(ct+k,max(ct,m));
        cout <<ct*(n-ct)<<endl;
        return ;
    }
    for(i=2; i<=n; i++)
    {
        if(vis[i]==0)
        {
            ct2++;         //cout <<ct<<" "<<ct2<<" "<<i<<endl;
        }
    }
    if(ct<ct2)
    {
        m = n-ct-ct;
        ct2 = min(ct2-ct,m%2+m/2);
        cout << -ct2*(m-ct2) <<endl;
        return;
    }
    cout <<(n-ct-ct2)*(ct-ct2)<<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
