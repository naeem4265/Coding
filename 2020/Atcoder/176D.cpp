#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push
#define mp make_pair
#define pi acos(-1.0)
#define Mod 10000007
#define limit 1008
using namespace std;
int fx[]={-1,0,1,0};
int fy[]={0,1,0,-1};
int fxx[]={-1,1,1,-1,-2,-2,-2,-1,0,1,2,2,2,2,2,1,0,-1,-2,-2};
int fyy[]={1,1,-1,-1,0,1,2,2,2,2,2,1,0,-1,-2,-2,-2,-2,-2,-1};
int ct[limit][limit];
int n,m,su,sv,du,dv;
queue<pair<int,int> > que;
pair<int,int> z;
void dfs(int u,int v)
{
    int i,x,y;   //cout <<u <<" "<<v<<endl;
    que.pb(mp(u,v));
    for(i=0; i<4; i++)
    {
        x = u+fx[i];
        y = v+fy[i];
        if(x>0 && x<=n && y>0 && y<=m )
        {
            if(ct[x][y]==-1 || ct[x][y]<=ct[u][v] ||(u==du && v==dv)) continue;
            ct[x][y] = min(ct[x][y],ct[u][v]);
            dfs(x,y);
        }
    }
}
void solve(int t)
{
    int i,j,x,y;
    char ch;
    cin >> n >> m;
    for(i=0; i<=n+5; i++)
    {
        for(j=0; j<=m+5; j++)
        {
            ct[i][j]=Mod;
        }
    }
    cin >> su >> sv >> du >> dv;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin >> ch;
            if(ch=='#')
                ct[i][j]=-1;
        }
    }
    ct[su][sv]=0;
    dfs(su,sv);
    while(!que.empty())
    {
        z = que.front();
        que.pop();
        su = z.first;
        sv = z.second;
        for(i=0; i<20; i++)
        {
            x = su+fxx[i];
            y = sv+fyy[i];
            if(x>0 && x<=n && y>0 && y<=m )
            {
                if(ct[x][y]==-1 || (ct[x][y]-1)<=ct[su][sv] ||(su==du && sv==dv)) continue;
                ct[x][y] = min(ct[x][y],ct[su][sv]+1);
                dfs(x,y);
            }
        }
    }
    if(ct[du][dv]==Mod)
        cout <<-1<<endl;
    else
        cout <<ct[du][dv]<<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


