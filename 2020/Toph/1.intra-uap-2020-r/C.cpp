#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define inf 1000000000000000000
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll cost[limit],mx[limit];

vector <ll> g[limit];
void dfs(ll p,ll u)
{
    ll sz,v,i,j;
    sz = g[u].size();
    if(sz==1 && u!=1)
    {
        mx[u]=cost[u];  //cout <<u<<" "<<mx[u]<<endl;
        return ;
    }
    for(i=0; i<sz; i++)
    {
        v = g[u][i];
        if(v==p) continue;
        dfs(u,v);
        cost[u] = cost[u]+cost[v];
        mx[u] = max(mx[u],mx[v]);  //cout <<u<<' '<<mx[u]<<endl;
    }
    mx[u] = max(mx[u],cost[u]);  //cout <<u<<" "<<mx[u]<<endl;
}
void solve(ll t)
{
    ll i,j,n,q,u,v,w;
    cin >> n >> q;
    for(i=0; i<limit; i++){ mx[i] = -inf; cost[i]=0;  }
    for(i=1; i<=n ;i++)
        cin >> cost[i];
    for(i=1; i<n; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(0,1);
    for(i=1; i<=q; i++)
    {
        cin >> u;
        cout <<mx[u]<<endl;
    }
}
int  main()
{
 //   Fast
//    Freed
//    Fout
    ll t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}



