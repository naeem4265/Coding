#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200008
using namespace std;
vector<ll> g[limit];
vector<ll> path[limit];
ll k;

void dfs(ll u,ll pr)
{
    path[pr].pb(u);
    if(g[u].empty())  return ;
    ll v = g[u][0];   //cout <<v<<" here "<<pr<<endl;
    dfs(v,pr);
    ll sz = g[u].size();
    for(ll i=1; i<sz; i++)
    {
        v = g[u][i];
        dfs(v, ++k);
    }
}

void solve(ll tt)
{
    ll i,j,n;
    cin >> n;
    ll pr=0;
    for(i=0; i<n+3; i++){
        g[i].clear();
        path[i].clear();
    }

    ll v;
    for(i=1; i<=n; i++)
    {
        cin >> v;
        if(i==v)
            pr = i;
        else
            g[v].pb(i);
    }
    k = 1;
    dfs(pr,k);
    cout <<k<<endl;
    for(i=1; i<=k; i++)
    {
        cout <<path[i].size()<<"\n";
        for(ll v: path[i])
        {
            cout <<v<<" ";
        }
        cout <<endl;
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
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
