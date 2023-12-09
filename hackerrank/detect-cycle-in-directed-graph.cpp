#include<iostream>
#include<vector>
#include<math.h>
#include<cstring>
#include<algorithm>

#define ll int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 105;
const ll Mod = 1e9+7;
using namespace std;
vector<ll> g[limit];
ll vis[limit], pr[limit];
vector<ll> temp, ans;
ll sum;

void path(ll u, ll p) {
    temp.pb(u);
    if(pr[u] == p) {
        ll ct = 0;        //cout <<temp.size()<<endl; for(ll v: temp )  cout <<v<<" ";   cout <<endl<<endl;
        for(ll v: temp ) {
            ct += v;
        }
        if( ct < sum ) {
            ans.clear();
            ans = temp;
            sum = ct;
        }
        return;
    }
    path( pr[u], p );
}

void dfs(ll u) {        
    if(vis[u]==1) {
        temp.clear();   
        path(u, u);
        return;
    }
    //if( vis[u]==2 )  return;

    vis[u] = 1;
    for(ll v: g[u]){
        pr[v] = u;  //cout <<u<<" "<<v<<" "<<g[u].size()<< endl;
        dfs(v);
    }
    vis[u] = 2;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,u,v;
    sum = 1e9;
    
    memset(vis, 0, sizeof(vis));
    memset(pr, -1, sizeof(pr));

    cin >> n >> m;
    for(i=0; i<m; i++) {
        cin >> u >> v;
        g[u].pb(v);
    }     
    for(i=1; i<=n; i++)   dfs(i);
    sort(ans.begin(), ans.end());
    for(ll v: ans )  cout << v <<" ";   cout <<endl;
    if(ans.empty())  cout <<-1<<endl;

    return ;
}


int  main()
{
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
