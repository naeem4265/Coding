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


vector<ll>g[limit],tg[limit];
bool vis[limit];
ll st[limit],ft[limit];
ll tme;

void dfs(ll u)
{
    st[u] = tme++;
    vis[u] = 1;
    for(ll v:g[u])
    {
        if(vis[v]==0)
        {
            dfs(v);
        }
    }
    ft[u] = tme++;
}

void dfs2(ll u)
{
    //cout <<u<<"->";
    vis[u] = 1;
    for(ll v:tg[u])
    {
        if(vis[v]==0)
        {
            dfs2(v);
        }
    }
}

/// Strongly Connected Component(SCC) O(Node+Edge)
void SCC(ll t)
{
    ll i,j;
    ll n,e,u,v;
    cin >> n >> e ;

    //clear
    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        tg[i].clear();
        vis[i] = 0;
        st[i] = ft[i] = 0;
    }
    tme = 1;

    for(i=0; i<e; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        tg[v].pb(u);
    }
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
    }
    vector<pair<ll,ll> > seq;

    for(i=1; i<=n; i++)
    {
        seq.pb(mp(ft[i],i));
    }
    sort(seq.begin(),seq.end());

    ll ct=0;
    memset(vis,0,sizeof(vis));
    for(i=n-1; i>=0; i--)
    {
        u = seq[i].second;
        if(vis[u]==0)
        {
            dfs2(u);
            ct++;
            cout <<endl;
        }
    }
    cout <<"Total number of SCC: "<<ct<<endl;
    return ;
}

int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        SCC(t);
    return 0;
}
