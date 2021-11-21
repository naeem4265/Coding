#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;

vector<ll> g[limit];
ll dis[limit];
ll from,to;
pair<ll,ll> z;
map<pair<ll,ll> ,ll > path;

void bfs(ll u)
{
    queue<ll> q;
    q.push(u);
    dis[u] = 1;
    while(!q.empty())
    {
        ll u = q.front();
        q.pop();
        for(ll v: g[u])
        {
            if(dis[v]==0)
            {
                dis[v] = dis[u]+1;
                q.push(v);
            }
        }
    }
}

bool dfs(ll u,ll pr)
{
    if(u==to) return 1;
    for(ll v: g[u])
    {
        if(v==pr) continue;
        if(dfs(v,u))
        {
            z = {u,v};             //cout << u <<" "<< v << endl;
            path[z] = 1;
            z = {v,u};
            path[z] = 1;
            return 1;
        }
    }
    return 0;
}

vector<pair<ll,ll> > edge;

struct st
{
    ll x1,y1,x2,y2;
};
st str;
vector<st> ans;

void dfs2(ll u,ll pr)
{
    for(ll v: g[u])
    {
        if(v==pr) continue;
        dfs2(v,u);
    }
    if(pr==0 || path[{u,pr}] || path[{pr,u}]) return ;
    str.x1 = pr;
    str.y1 = u;
    str.x2 = from;
    str.y2 = u;
    from = u;
    ans.pb(str);
}


void solve(ll t)
{
    ll i,j,n,m,k;
    cin >> n ;

    for(i=0; i<=n+5; i++)
    {
        g[i].clear();
        dis[i] = 0;
    }
    edge.clear();
    ans.clear();


    for(i=1; i<n; i++)
    {
        ll u, v;
        cin >> u >> v;
        edge.pb({u,v});
        path[{u,v}] = 0;
        path[{v,u}] = 0;
        g[u].pb(v);
        g[v].pb(u);
    }

    bfs(1);
    from = 0;
    for(i=1; i<=n; i++)
    {
        if(dis[from]<dis[i])
            from = i;
    }
    memset(dis,0,sizeof(dis));

    bfs(from);
    to = 0;
    for(i=1; i<=n; i++)
    {
        if(dis[to]<dis[i])
            to = i;
    }

    dfs(from,0);

    dfs2(from,0);

    ll sz = ans.size();
    cout << sz << endl;
    for(i=0; i<sz; i++)
    {
        str = ans[i];
        cout << str.x1 <<" "<< str.y1 <<" "<< str.x2 <<" "<< str.y2 << endl;
    }

    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
