#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 200008
using namespace std;
ll cost[limit],even,odd;
bool vis[limit];
vector <ll> g[limit];

ll Setbit(ll x)
{
    ll ct=0;
    while(x)
    {
        if(x&1)
            ct++;
        x /= 2;
    }
    return ct;
}
void bfs(ll u,bool ck)
{
    ll bt,od=0,ev=0;
    vis[u]=1;
    bt = Setbit(cost[u]);
    if(bt&1) od++;
    else ev++;
    queue<ll>que;
    que.push(u);
    while(!que.empty())
    {
        u = que.front();
        que.pop();
        ll sz,i;
        sz = g[u].size();
        for(i=0; i<sz; i++)
        {
            ll v = g[u][i];
            bt = Setbit(cost[v])&1;
            if(!vis[v] && bt==ck)
            {
                vis[v]=1;
                if(bt&1) od++;
                else ev++;
                que.push(v);
            }
        }
    }   //cout <<ev<<" in "<<od<<endl;
    even = max(even,ev);
    odd = max(odd,od);
}
void solve(ll t)
{
    ll n,m,i,j;
    cin >> n >> m;
    even = odd = 0;
    for(i=0; i<n+5; i++)
    {
        g[i].clear();
        cost[i]=0;
        vis[i]=0;
    }
    for(i=1; i<=n; i++)
    {
        cin >> cost[i];
    }
    for(i=0; i<m; i++)
    {
        ll u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    for(i=1; i<=n; i++)
    {
        if(!vis[i])
            bfs(i,Setbit(cost[i])&1);
    }
    ll q;
    cin >> q;
    while(q--)
    {
        ll type, k, bt;
        cin >> type >> k;
        bt = Setbit(k);
        if(type==1)
        {
            if(bt&1)
            {
                cout <<even<<endl;
            }
            else
            {
                cout <<odd<<endl;
            }
        }
        if(type==2)
        {
            if(bt&1)
            {
                cout <<odd<<endl;
            }
            else
            {
                cout <<even<<endl;
            }
        }
    }
    return ;
}
int  main()
{
  //  Fast
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}

