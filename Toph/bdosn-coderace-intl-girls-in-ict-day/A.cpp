#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 108
using namespace std;
ll fx[] = {-1,0,+1,0};
ll fy[] = {0,+1,0,-1};
ll tim[limit][limit], tre[limit][limit], ttim[limit][limit], ttre[limit][limit];

void solve(ll tt)
{
    ll i,j,n,m,x,y,xx,yy;
    cin >> n >> m;
    tim[1][1] = 0;
    tre[1][1] = 0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if((i+j)==2 || (i+j)==(n+m))   continue;
            cin >> tim[i][j];
            if(tim[i][j]==-1)   continue;
            cin >> tre[i][j];
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            ttim[i][j] = Mod;
            ttre[i][j] = 0;
        }
    }
    ttim[1][1] = 0;
    ttre[1][1] = 0;
    queue<pair<ll,ll> > q;
    q.push({1,1});
    while(!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(i=0; i<4; i++)
        {
            xx = x+fx[i];
            yy = y+fy[i];
            if(xx<1 || xx>n || yy<1 || yy>m || tim[xx][yy]==-1)  continue;
            if(ttim[xx][yy]>(ttim[x][y]+tim[x][y]+1))
            {
                ttim[xx][yy] = ttim[x][y]+tim[x][y]+1;
                ttre[xx][yy] = ttre[x][y]+tre[x][y];
                q.push({xx,yy});
            }
            else if(ttim[xx][yy]==(ttim[x][y]+tim[x][y]+1) && ttre[xx][yy]<(ttre[x][y]+tre[x][y]))
            {
                ttim[xx][yy] = ttim[x][y]+tim[x][y]+1;
                ttre[xx][yy] = ttre[x][y]+tre[x][y];
                q.push({xx,yy});
            }
        }
    }
    if(ttim[n][m]>=Mod)
    {
        cout <<-1<<endl;
        return;
    }
    cout <<ttim[n][m]<<" "<<ttre[n][m]<<endl;

    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
