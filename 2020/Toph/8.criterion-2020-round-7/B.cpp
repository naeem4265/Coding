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
vector<int> g[limit];
int Time[limit],comu[limit];
void bfs(int u)
{
    queue<int>Q;
    Q.push(u);
    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();
        int i,v,sz=g[u].size();
        for(i=0; i<sz; i++)
        {
            v = g[u][i];
            if(Time[v]>(Time[u]+i+1))
            {
                Time[v] = Time[u]+i+1;
                comu[v] = u;
                Q.push(v);
            }
        }
    }
}
void solve(int t)
{
    int i,j,n,m;
    cin >> n >> m;
    for(i=0; i<=n+5; i++)
    {
        g[i].clear();
    }
    for(i=0; i<m; i++)
    {
        int u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    for(i=0; i<=n+5; i++)
    {
        Time[i]=Mod;
        comu[i]=-1;
        if(g[i].size())
            sort(g[i].begin(),g[i].end());
    }
    Time[0]=0;
    bfs(0);
    int q;
    cin >> q;
    cout <<"Case "<<t<<":\n";
    while(q--)
    {
        int u, v;
        cin >> u >> v;
        if(comu[u]==v || comu[v]==u)
            cout <<"Yes\n";
        else
            cout <<"No\n";
    }
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

///Accepted
