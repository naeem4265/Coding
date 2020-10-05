#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 28
int fx[]={-1,0,1,0};
int fy[]={0,1,0,-1};
using namespace std;
int cost[limit][limit],D[limit][limit],n,m;
void bfs(int u,int v)
{
    int i,x,y;
    queue <pair<int,int> >que;
    pair<int,int> z;
    que.push(mp(u,v));
    while(!que.empty())
    {
        z = que.front();
        que.pop();
        u = z.first;
        v = z.second;
        for(i=0; i<4; i++)
        {
            x = u+fx[i];
            y = v+fy[i];
            if(x>0 && x<=n && y>0 && y<=m)
            {
                if(cost[x][y] <= (cost[u][v]+D[x][y]))  continue;
                cost[x][y] = cost[u][v]+D[x][y];
                que.push(mp(x,y));
            }
        }
    }
}
void solve(int t)
{
    int i,j;
    cin >> n >> m;
    for(i=0; i<limit; i++) for(j=0; j<limit; j++) cost[i][j]=Mod;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin >> D[i][j];
        }
    }
    cost[1][1]=D[1][1];
    bfs(1,1);
    cout <<"Case "<<t<<": Penalty = "<< cost[n][m] <<endl;
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


