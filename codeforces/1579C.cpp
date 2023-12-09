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
#define limit 1000008
using namespace std;

string s[20];
bool vis[20][20];
ll n,m,k;

bool dfs2(ll x, ll y, ll ct,ll sz)
{
    if(x<0 || x>=n || y<0 || y>=m) return 0;
    if(s[x][y]=='.') return 0;
    if(ct==0 && sz>=k)
    {
        vis[x][y] = 1;
        return 1;
    };
    if( dfs2(x-1,y+1,ct-1,sz))
    {
        vis[x][y] = 1;
        return 1;
    }
    else return 0;
}

bool dfs(ll x, ll y, ll ct,ll sz)
{
    if(x<0 || x>=n || y<0 || y>=m) return 0;
    if(s[x][y]=='.') return 0;

    if(ct==0 && sz>=k)
    {
        vis[x][y] = 1;   //cout <<x<<" here1 "<<y<<endl;
        return 1;
    };

    bool ok1,ok2;
    ok1 = dfs(x+1,y+1,ct+1,sz+1);
    ok2 = dfs2(x-1,y+1,ct-1,sz);
    if(ok1 || ok2)  vis[x][y] = 1;       //cout <<x<<" "<<y<<" "<<vis[x][y]<<" "<<ok1<<" "<<ok2<<endl;
    return (ok1 || ok2);
}

void solve(ll t)
{
    ll i,j;
    cin >> n >> m >> k;
    for(i=0; i<n; i++)
        cin >> s[i];

    memset(vis,0,sizeof(vis));

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(s[i][j]=='*')
                dfs(i,j,0,0);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(s[i][j]=='*' && vis[i][j]==0)
            {           //cout <<i<<" "<<j<<endl;
                cout <<"NO\n";
                return ;
            }
        }
    }
    cout <<"YES\n";
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
