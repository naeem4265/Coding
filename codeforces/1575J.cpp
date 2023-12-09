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
#define limit 1008
using namespace std;

ll n,m;
ll d[limit][limit];

void dfs(ll x,ll y)
{
    if(x==n)
    {
        cout <<y+1<<" ";
        return ;
    }
    if(d[x][y]==1)
    {
        d[x][y] = 2;
        dfs(x,y+1);
    }
    else if(d[x][y]==3)
    {
        d[x][y] = 2;
        dfs(x,y-1);
    }
    else
        dfs(x+1,y);
    return ;
}

void solve(ll t)
{
    ll i,j,k;
    string s;
    cin >> n >> m >> k;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            cin >> d[i][j];
    }
    while(k--)
    {
        ll a;
        cin >> a;
        dfs(0,a-1);
    }
    cout <<endl;
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
