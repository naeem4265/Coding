#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 308
using namespace std;
vector <ll> g[limit];
ll cost[limit],w[limit][limit],dis[limit];
bool vis[limit];
void bfs(int n)
{
    int i,j,v,u;
    for(i=0; i<=n; i++)
    {
        u = n+1;
        for(j=1; j<=n; j++)
        {
            if(vis[j]) continue;
            if(cost[u]>cost[j])
                u = j;
        }
        vis[u] = 1;  //cout <<u<<" ucost "<<cost[u]<<endl;
        for(j=g[u].size()-1; j>=0; j--)
        {
            v = g[u][j];
            if(cost[v]==(cost[u]+w[u][v]))
            {
                dis[v] = max(dis[v],dis[u]+1);
            }
            if(cost[v]>(cost[u]+w[u][v]))
            {
                dis[v] = dis[u]+1;
                cost[v] = min(cost[v],cost[u]+w[u][v]);
            }
        }
    }
}
void solve(int t)
{
    ll i,j,n,m,k,a,ct=0,u,v,c,s,d;
    cin >> n >> m >> k;
    int sum[k+5];
    cin >> s >> d;
    for(i=0; i<n+5; i++)
    {
        vis[i]=0;
        dis[i]=0;
        cost[i]=inf;
        g[i].clear();
    }
    for(i=0; i<k; i++)
    {
        cin >> sum[i] ;
    }
    sort(sum,sum+k);
    reverse(sum,sum+k);
    for(i=1; i<k; i++)
        sum[i] += sum[i-1];
    for(i=0; i<m; i++)
    {
        cin >> u >> v >> c;
        if(u==v) continue;
        g[u].pb(v);
        w[u][v]=c;
    }
    cost[s]=0;
    dis[s]=0;
    bfs(n);
    if(cost[d]==inf)
    {
        cout <<-1<<endl;
        return;
    }
    if(dis[d])
    {
        ct = min(dis[d],k);
        ct = sum[ct-1];
    }
    cout <<max((ll)0,cost[d]-ct)<<endl;
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

/*
1
7 10 1
1 6
5
1 2 2
1 3 1
1 7 2
2 4 8
2 5 15
3 4 5
4 5 6
5 6 10
6 7 1
7 6 100
*/
