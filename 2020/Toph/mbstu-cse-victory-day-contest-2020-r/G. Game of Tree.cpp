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
vector<ll>g[limit];
bool vis[limit];

ll bfs(ll u)
{
    vis[u] = 1;
    ll ct=1;
    queue<ll>q;
    q.push(u);
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(auto v:g[u])
        {
            if(vis[v]==0)
            {
                ct++;
                vis[v]=1;
                q.push(v);
            }
        }
    }
    return ct;
}

void solve(ll tc)
{
    ll i,j,n,m,k,u,v;
    cin >> n >> k;
    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        vis[i]=0;
    }
    for(i=1; i<n; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    cout <<"Case "<<tc<<": ";
    vis[k]=1;
    for(i=0; i<g[k].size(); i++)
    {
        v = g[k][i];
        m = bfs(v);
        if(m>(n-m))
        {
            cout <<"Yes\n";
            return ;
        }
    }
    cout <<"No\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

