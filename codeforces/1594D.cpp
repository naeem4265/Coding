#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200008
using namespace std;
vector<pair<ll,bool> >g[limit];
bool vis[limit];
bool node[limit];

void reset(ll u)
{      //cout <<u<<" ";
    vis[u] = 0;
    for(ll i=g[u].size()-1; i>=0; i--)
    {
        ll v=g[u][i].first;
        if(vis[v])
            reset(v);
    }
}

ll dfs(ll u)
{       //cout <<u<<" ";
    ll ct=0;
    vis[u] = 1;
    for(ll i=g[u].size()-1; i>=0; i--)
    {
        ll v=g[u][i].first;
        bool ok=g[u][i].second;

        if(vis[v] && (node[u]==ok)!=node[v])
            return -1;
        if(vis[v]) continue;

        ll temp;
        if(node[u]==ok)
        {
            node[v] = 1;
            temp = dfs(v);
            if(temp==-1) return temp;
            ct += temp;
        }
        else
        {
            node[v] = 0;
            temp = dfs(v);
            if(temp==-1) return temp;
            ct += temp+1;
        }
    }
    return ct;
}

void solve(ll t)
{
    ll i,j,n,m;
    string s;
    cin >> n >> m;
    for(i=0; i<n+5; i++)
    {
        vis[i]=0;
        g[i].clear();
    }

    for(i=0; i<m; i++)
    {
        ll u,v;
        bool k=1;
        cin >> u >> v >>s;
        if(s[0]=='i') k=0;
        g[u].pb(mp(v,k));
        g[v].pb(mp(u,k));
    }

    ll ans=0;
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            ll ct1=0,ct2=0;
            node[i] = 0;
            ct1 = dfs(i);       //cout <<endl;
            reset(i);
            node[i] = 1;        //cout <<endl;
            ct2 = dfs(i);
            if(ct1==ct2 && ct1==-1)
            {
                cout <<-1<<endl;
                return;
            }
            ans += max(ct1+1,ct2);  //cout <<endl<<i<<" called "<<ct1<<" "<<ct2<<" "<<ans<<endl;
        }
    }
    cout << ans <<endl;

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
        solve(t);
    return 0;
}
