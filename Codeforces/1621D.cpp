#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

ll fx[] = {0,1,0,-1};
ll fy[] = {1,0,-1,0};
ll cost[255][255],d[255][255],m;

void dfs(ll x, ll y)
{
    vector< pair<ll,pair<ll,ll> > >vp;
    for(ll i=0; i<4; i++)
    {
        ll u,v;
        u = x+fx[i];
        v = y+fy[i];
        if(u<0 || v<0 || u>=m || v>=m) continue;
        if((cost[x][y]+d[u][v])<cost[u][v])
        {         //cout <<u<<" "<<v<<" "<<x<<" "<<y<<" "<<d[u][v]<<" "<<cost[x][y]<<endl;
            vp.push_back(mp(cost[x][y]+d[u][v], mp(u,v)));
        }
    }
    ll sz = vp.size();
    if(sz)
    {
        sort(vp.begin(),vp.end());
        for(ll i=0; i<sz; i++)
        {
            ll u = vp[i].second.first;
            ll v = vp[i].second.second;

            cost[u][v] = vp[i].first;
            dfs(u,v);
        }
    }
}

void solve(ll tt)
{
    ll i,j,n;
    scanf("%lld", &n);
    m = 2LL*n;

    for(i=0; i<m+5; i++)
    {
        for(j=0; j<m+5; j++){
            cost[i][j] = 1e18;
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
            scanf("%lld", &d[i][j]);
    }

    ll ct=0;
    for(i=n; i<m; i++)
    {
        for(j=n; j<m; j++)
        {
            ct += d[i][j];
            d[i][j] = 0;
        }
    }
    cost[m-1][m-1] = 0;
    dfs(m-1,m-1);

//    for(i=0; i<m; i++)
//    {
//        for(j=0; j<m; j++)
//            cout << cost[i][j]<<" ";   cout <<endl;
//    }

    ll mn = 1e18;
    for(i=0; i<n; i++)
    {
        if(cost[i][n]<mn)
            mn = cost[i][n];
        if(cost[i][m-1]<mn)
            mn = cost[i][m-1];
    }
    for(j=0; j<n; j++)
    {
        if(cost[n][j]<mn)
            mn = cost[n][j];
        if(cost[m-1][j]<mn)
            mn = cost[m-1][j];
    }

    printf("%lld\n",ct+mn);
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%lld", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
