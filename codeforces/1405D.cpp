#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
bool vis[limit];
vector<int> g[limit];
int mxdis,lnode;
int bfs(int u,int d)
{
    lnode=u;
    mxdis=0;
    if(u==d)
        return 0;
    queue<pair<int,int> > Q;
    Q.push(mp(u,0));
    vis[u]=1;
    int dis=0;
    while(!Q.empty())
    {
        pair<int,int> z;
        z = Q.front();
        u = z.first;
        Q.pop();
        int sz=g[u].size();
        for(int i=0; i<sz; i++)
        {
            int v = g[u][i];
            if(vis[v])  continue;
            vis[v]=1;
            if(v==d)
                dis = z.second+1;
            if(mxdis<(1+z.second))
            {
                mxdis=1+z.second;
                lnode=v;
            }
            Q.push(mp(v,z.second+1));
        }
    }
    return dis;
}
void solve(int t)
{
    int i,j,n,a,b,da,db,u,v;
    cin >> n >> a >> b >> da >> db;
    for(i=0; i<n+5; i++)
    {
        vis[i]=0;
        g[i].clear();
    }
    for(i=1; i<n; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    int dis=bfs(a,b);     //cout <<dis<<" up "<<mxdis<<' '<<lnode<<endl;
    for(i=0; i<n+5; i++)
    {
        vis[i]=0;
    }
    int x = bfs(lnode,n+1);   //cout <<x<<" dn "<<mxdis<<' '<<lnode<<endl;
    if(dis<=da || db<=2*da || mxdis<=2*da)
    {
        cout <<"Alice\n";
    }
    else
    {
        cout <<"Bob\n";
    }
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

