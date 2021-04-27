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


vector<ll>g[limit],tg[limit],seq;
bool vis[limit];
ll st[limit],ft[limit];
ll tme;
ll ans ,ct;

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
    seq.pb(u);
}

void dfs2(ll u)
{
    //cout <<u<<"->";
    ct++;
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
    cin >> n;

    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        tg[i].clear();
        vis[i] = 0;
        st[i] = ft[i] = 0;
    }
    seq.clear();
    tme = 1;
    ans = 0;
    ct = 0;

    for(i=0; i<n; i++)
    {
        cin >> u ;
        v = (i+u+1)%n;
        if(i==v)
        {
            ans++;
        }
        else
        {
            g[i].pb(v);
            tg[v].pb(i);
        }
    }
    for(i=0; i<n; i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
    }

    memset(vis,0,sizeof(vis));
    for(i=n-1; i>=0; i--)
    {
        u = seq[i];
        if(vis[u]==0)
        {
            dfs2(u);
            if(ct>1) ans+=ct;
            ct = 0;
        }
    }
    cout << ans <<endl;
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
