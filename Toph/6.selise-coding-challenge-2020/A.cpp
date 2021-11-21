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
vector <int> g[limit],g2[limit];
bool vis[limit],vis2[limit];
stack <int> stk;
int ct;
void dfs(int u)
{
    vis[u]=1;
    for(int i=g[u].size()-1; i>=0; i--)
    {
        int v = g[u][i];
        if(vis[v]==0)
            dfs(v);
    }
    stk.push(u);  // cout <<u<<endl;
}
void dfs2(int u)
{
    vis2[u] = 1;
    for(int i=g2[u].size()-1; i>=0; i--)
    {
        int v=g2[u][i];
        if(vis2[v]==0)
        {
            ct++;
            dfs2(v);
        }
    }
}
void solve(int t)
{
    int i,j,n,m;
    cin >> n >> m;
    for(i=0; i<n+2; i++)
    {
        g[i].clear();
        g2[i].clear();
        vis[i]=0;
        vis2[i]=0;
        if(stk.size())
            stk.pop();
    }
    for(i=0; i<m; i++)
    {
        int u,v;
        cin >> u >> v;
        if(u==v) continue;
        g[u].pb(v);
        g2[v].pb(u);
    }
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0)
            dfs(i);
    }
    int ans=0;
    for(i=1; i<=n; i++)
    {
        int u=stk.top();   //cout <<u<<endl;
        stk.pop();
        if(vis2[u]==0)
        {
            ct = 0;
            dfs2(u);   //cout<<u<<" "<<ans<<endl;
            if(ct==0 && g[u].size())
                ans++;
        }
    }

    cout <<"Case "<<t<<": "<<ans<<endl;
}
int  main()
{
 //   Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}

