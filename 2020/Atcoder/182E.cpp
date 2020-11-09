#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1508
using namespace std;
bool vis[limit][limit], ok[limit][limit];
int bulbs[500005][2];

void solve(int t)
{
    int i,j,h,w,n,m,x,y;
    scanf("%d %d %d %d",&h,&w,&n,&m);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&bulbs[i][0],&bulbs[i][1]);
        vis[bulbs[i][0]][bulbs[i][1]]=1;
    }
    for(i=0; i<m; i++)
    {
        scanf("%d %d",&x,&y);
        vis[x][y]=1;
    }
    for(i=0; i<n; i++)
    {
        x = bulbs[i][0];
        y = bulbs[i][1];
        ok[x][y]=1;
        for(j=x-1; j>0; j--)
        {
            if(vis[j][y]) break;
            ok[j][y] = 1;
        }
        for(j=y-1; j>0; j--)
        {
            if(vis[x][j]) break;
            ok[x][j] = 1;
        }
        for(j=x+1; j<=h; j++)
        {
            if(vis[j][y]) break;
            ok[j][y] = 1;
        }
        for(j=y+1; j<=w; j++)
        {
            if(vis[x][j]) break;
            ok[x][j] = 1;
        }
    }
    int ans=0;
    for(i=1; i<=h; i++)
    {
        for(j=1; j<=w; j++)
            ans += ok[i][j];
    }
    printf("%d\n",ans);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
 //   cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

