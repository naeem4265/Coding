#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 205;
const ll Mod = 1e9+7;
using namespace std;
string s[205];
ll n,m;
ll fx[] = {-1, 0, 1, 0};
ll fy[] = {0, -1, 0, 1};
bool vis[limit][limit];

ll dfs(ll x, ll y)
{
    vis[x][y] = 1;
    ll mx = 0;
    for(ll i=0; i<4; i++)
    {
        ll u,v;
        u = x+fx[i];
        v = y+fy[i];
        if(u<0 || u>=n || v<0 || v>=m || s[u][v]=='#' || vis[u][v])  continue;
        mx = max(mx, dfs(u,v));
    }
    return mx+1;
}

void Please_AC(ll tt)
{
    cin >> n >> m;
    memset(vis, 0, sizeof(vis));

    for(ll i=0; i<n; i++)   cin >> s[i];
    cout << dfs(1,1) <<endl;

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
