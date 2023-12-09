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
#define limit 1008
using namespace std;
bool vis[limit][limit];
ll d[limit][limit];

ll dfs(ll x, ll y)
{
    ll ct = 1;
    vis[x][y] = 1;
    if( (d[x][y]&8)==0 && vis[x-1][y]==0)
        ct += dfs(x-1,y);
    if( (d[x][y]&4)==0 && vis[x][y+1]==0)
        ct += dfs(x,y+1);
    if( (d[x][y]&2)==0 && vis[x+1][y]==0)
        ct += dfs(x+1,y);
    if( (d[x][y]&1)==0 && vis[x][y-1]==0)
        ct += dfs(x,y-1);
    return ct;
}

void solve(ll t)
{
    ll i,j,n,m;
    cin >> n >> m;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin >> d[i][j];
        }
    }
    vector<ll> v;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(vis[i][j]==0)   v.pb(dfs(i,j));
        }
    }
    sort(v.begin(), v.end());
    for(i=v.size()-1; i>=0; i--)
        cout <<v[i]<<" ";
    cout <<endl;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
