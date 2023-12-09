#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 200008
using namespace std;
vector <int> g[limit];
bool vis[limit];
int ct;
void bfs(int u)
{
    vis[u]=1;
    ct++;
    queue<int> qu;
    qu.push(u);
    while(!qu.empty())
    {
        u = qu.front();
        qu.pop();
        for(int i=g[u].size()-1; i>=0; i--)
        {
            int v = g[u][i];
            if(vis[v]==0)
            {
                ct++;
                vis[v]=1;
                qu.push(v);
            }
        }
    }
}
void solve(int t)
{
    int i,j,n,m,u,v,ans=0;
    cin >> n >> m;
    for(i=0; i<m; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    for(i=1; i<=n; i++)
    {
        ct = 0;
        if(vis[i]==0)
            bfs(i);
        ans = max(ans,ct);
    }
    cout <<ans <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}

