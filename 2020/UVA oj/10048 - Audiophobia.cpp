#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 108
using namespace std;
vector<int>g[limit];
int u,v,s,d,mx,cost[limit][limit];

bool bfs(int x)
{
    bool vis[limit];
    memset(vis,0,sizeof(vis));
    queue<int>Q;
    Q.push(s);
    vis[s]=1;
    int m=0;
    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();
        for(int v:g[u])
        {
            if(cost[u][v]>x || vis[v]) continue;
            if(v==d)
            {
                m = max(m,cost[u][v]);
                mx = min(mx,m);
                return 1;
            }
            if(vis[v]==0)
            {
                m = max(m,cost[u][v]);
                vis[v]=1;
                Q.push(v);
            }
        }
    }
    return 0;
}

void solve(int t)
{
    int i,j,n,e,q,w;
    while(++t)
    {
        cin >> n >> e >> q;
        if(n==0 && e==0 && q==0) return ;
        for(i=0; i<n+5; i++)
        {
            g[i].clear();
        }
        for(i=0; i<e; i++)
        {
            cin >> u >> v >> w;
            g[u].pb(v);
            g[v].pb(u);
            cost[u][v]=w;
            cost[v][u]=w;
        }
        if(t!=1)
            cout <<endl;
        cout <<"Case #"<<t<<endl;
        for(i=0; i<q; i++)
        {
            cin >> s >> d;
            int l=0,h=Mod,m;
            mx = Mod;
            while(l<=h)
            {
                m = (l+h)/2;
                if(bfs(m))
                    h = m-1;
                else
                    l = m+1;
            }
            if(mx==Mod)
                cout <<"no path\n";
            else
                cout <<mx<<endl;
        }
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(0);
    return 0;
}

