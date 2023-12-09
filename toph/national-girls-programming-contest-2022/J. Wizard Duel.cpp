#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;

struct str
{
    ll v,p,q;
};
vector<str> g[40];
bool vis[40];

ll bfs(ll u, ll v, ll p, ll q)
{
    vis[u] = 1;
    if(u==v)
    {
        if(p==q)   return 1;
        else if(p>q)    return 0;
        else       return 2;
    }
    ll mx = -Mod;
    for(ll i=0; i<g[u].size(); i++)
    {
        str z = g[u][i];
        if(vis[z.v])   continue;
        mx = max(mx, bfs(z.v, v, p*z.q, q*z.p));
    }
    return mx;
}


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    for(i=0; i<40; i++)
    {
        g[i].clear();
    }

    cin >> n >> m >> q;
    ll x,y;
    for(k=0; k<m; k++)
    {
        cin >> i >> j >> x >> y;
        str z;
        z.v = j;
        z.p = x;
        z.q = y;
        g[i].pb(z);
        z.v = i;
        z.p = y;
        z.q = x;
        g[j].pb(z);
    }
    while(q--)
    {
        memset(vis, 0, sizeof(vis));
        cin >> x >> y;
        ll temp = bfs(x,y, 1, 1);
        if(temp==2LL)        cout <<"win\n";
        else if(temp==1LL)   cout <<"draw\n";
        else if(temp==0LL)   cout <<"lose\n";
        else                 cout <<"unknown\n";
    }

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

