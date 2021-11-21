#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 2008
using namespace std;

ll n,m;
string s[limit];
char col[limit][limit];
ll d[limit][limit];


ll cycle(ll x,ll y)
{
    if(col[x][y]=='c') return 0;
    col[x][y] = 'c';
    if(s[x][y]=='U')  return 1+cycle(x-1,y);
    if(s[x][y]=='D')  return 1+cycle(x+1,y);
    if(s[x][y]=='L')  return 1+cycle(x,y-1);
    if(s[x][y]=='R')  return 1+cycle(x,y+1);
}

ll dfs(ll x,ll y)
{
    if(x<0 || x>=n || y<0 || y>=m)  return 0;
    if(col[x][y]=='b') return d[x][y];
    if(col[x][y]=='g')
    {
        return cycle(x,y);
    }

    ll ct=0;
    col[x][y] = 'g';
    if(s[x][y]=='U')   ct = dfs(x-1,y);
    if(s[x][y]=='D')   ct = dfs(x+1,y);
    if(s[x][y]=='L')   ct = dfs(x,y-1);
    if(s[x][y]=='R')   ct = dfs(x,y+1);

    d[x][y] = ct;
    if(col[x][y]=='g')  d[x][y]++;  //cout <<x<<" "<<y<<" "<<col[x][y]<<" "<<ct<<" "<<d[x][y]<<endl;
    col[x][y] = 'b';

    return d[x][y];
}

void solve(ll t)
{
    ll i,j,k,q;

    cin >> n >> m;

    for(i=0; i<=n; i++)
    {
        for(j=0; j<=m; j++)
        {
            col[i][j] = '-';
        }
    }

    for(i=0; i<n; i++)
        cin >> s[i];

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            dfs(i,j);
        }
    }

    ll xx=0,yy=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(d[xx][yy] < d[i][j])
            {
                xx = i;
                yy = j;
            }
        }
    }
    cout << xx+1 <<" "<< yy+1 <<" "<< d[xx][yy]  <<endl;


    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
