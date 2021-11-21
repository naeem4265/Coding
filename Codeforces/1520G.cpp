#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define limit 2008
using namespace std;
ll fx[] = {-1,0,1,0};
ll fy[] = {0,1,0,-1};
ll n,m,w,mx;
ll portal,portal2;
ll d[limit][limit],cost[limit][limit];
bool vis[limit][limit];

void bfs(ll x, ll y)
{                  //cout << x << " "<< y <<" "<<cost[x][y]<<' '<<portal<<endl;
    vis[x][y] = 1;
    if(d[x][y]>0)
    {
        if(portal > d[x][y]+cost[x][y])
            portal = d[x][y]+cost[x][y];         //cout <<portal<<" "<<x<< " "<<y<<endl;
        if(cost[n][m] > portal+portal2)
            cost[n][m] = portal+portal2;
    }
    pair<ll,ll> p;
    queue<pair<ll, ll> > q;
    q.push({x,y});
    while( !q.empty() )
    {
        p = q.front();
        q.pop();
        for(ll i=0; i<4; i++)
        {
            ll u,v;
            x = p.first;
            y = p.second;
            u = x+fx[i];
            v = y+fy[i];
            if(u<1 || v<1 || u>n || v>m || d[u][v]==-1 || vis[u][v])
                continue;
            if(cost[u][v] > cost[x][y]+w)
            {
                cost[u][v] = cost[x][y]+w;  //cout <<u<<" cost "<<v<<" "<<cost[u][v]<<" "<<x<<" "<<y<<" "<<cost[x][y]<<endl;
            }
            vis[u][v] = 1;
            q.push({u,v});
            if(d[u][v]>0)
            {
                if(portal > d[u][v]+cost[u][v])
                    portal = d[u][v]+cost[u][v];
                if(cost[n][m] > portal+portal2)
                    cost[n][m] = portal+portal2;       //cout <<portal<<" here "<<u<< " "<<v<<" "<<cost[u][v]<<endl;
            }
        }
    }
}

void solve(ll t)
{
    ll i,j;
    //cin >> n >> m >> w;
    scanf("%lld %lld %lld", &n, &m, &w);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            //cin >> d[i][j];
            scanf("%lld", &d[i][j]);
        }
    }
    mx = 2000000000000000007;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cost[i][j] = mx;
            vis[i][j] = 0;
        }
    }
    portal = mx;
    cost[n][m] = 0;

    bfs(n,m);
    portal2 = portal;         //cout <<portal2<<endl;

    mx = 2000000000000000007;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cost[i][j] = mx;
            vis[i][j] = 0;
        }
    }
    portal=mx;
    cost[1][1] = 0;
    bfs(1,1);


    if(cost[n][m]>=mx)
        cost[n][m] = -1;


    //cout << cost[n][m] << endl;
    printf("%lld\n", cost[n][m]);
    return ;
}

int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
