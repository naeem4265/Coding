#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 508
using namespace std;
bool vis[limit][limit];
int n,m,ct=0;
void dfs(int x,int y)
{
    int i,j;  //cout <<x<<" "<<y<<endl;
    if(vis[x][y]==0)
        ct++;
    vis[x][y]=1;
    i = x; j = y-1;
    if(j>0)
        if(vis[i][j]==0 && vis[i][j-1]==0)
            dfs(i,j-1);
    i = x; j = y+1;
    if(j<2*m-2)
        if(vis[i][j]==0 && vis[i][j+1]==0)
            dfs(i,j+1);
    i = x-1; j = y;
    if(i>0)
        if(vis[i][j]==0 && vis[i-1][j]==0)
            dfs(i-1,j);
    i = x+1; j = y;
    if(i<2*n-2)
        if(vis[i][j]==0 && vis[i+1][j]==0)
            dfs(i+1,j);
}
void solve(int t)
{
    int i,j;
    cin >> n >> m;
    for(i=0; i<limit; i++)
        for(j=0; j<limit; j++)
            vis[i][j]=0;
    char ch;
    for(i=0; i<2*n; i+=2)
    {
        for(j=0; j<2*m; j+=2)
        {
            cin >> ch;
            vis[i][j]=1;
            if(ch=='N') continue;
            if(ch=='D' || ch=='B') vis[i+1][j]=1;
            if(ch=='R' || ch=='B') vis[i][j+1]=1;
        }
    }
    ct = 0;
    for(i=1; i<2*m-2; i+=2)
    {
        if(vis[0][i]==0)
        {
            dfs(1,i);
        }
    }
    cout <<"Case "<<t<<": "<< ct <<endl;
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

