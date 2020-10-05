#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 10008
using namespace std;
bool vis[limit];
vector<int> g[limit];
bool bfs(int u,int d)
{
    queue<int>Q;
    Q.push(u);
    vis[u]=1;
    while(!Q.empty())
    {
        int i,v;
        u = Q.front();
        Q.pop();
        for(i=g[u].size()-1; i>=0; i--)
        {
            v = g[u][i];
            if(v==d)
                return 1;
            if(vis[v])
            {
                continue;
            }
            else
            {
                vis[v]=1;
                Q.push(v);
            }
        }
    }
    return 0;
}
void solve(int t)
{
    int i,j,n,m,u,v;
    cin >> n >> m;
    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        vis[i]=0;
    }
    for(i=0; i<m; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
    }
    int ct=0;
    for(i=1; i<=n; i++)
    {
        for(j=0; j<n+5; j++) vis[j]=0;

        ct += bfs(i,i);
    }
    cout <<"Case "<<t<<": "<<n-ct<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


