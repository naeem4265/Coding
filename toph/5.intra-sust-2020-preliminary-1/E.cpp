#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;
ll ct,cost[limit];
vector <ll> g[limit],out;

void dfs(ll p,ll u)
{
    ct = ct | cost[u];
    ll i,v,sz=g[u].size();
    for(i=0; i<sz; i++)
    {
        v = g[u][i];
        if(v==p) continue;
        dfs(u,v);
    }
}
void solve(ll t)
{
    ll i,j,n,u,v,ans=0;
    cin >> n;
    for(i=1; i<n; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    for(i=1; i<=n; i++)
        cin >> cost[i];
    for(i=0; i<g[1].size(); i++)
    {
        v = g[1][i];
        ct = cost[1];
        dfs(1,v);
        out.pb(ct);
    }
    ans = cost[1];
    ll sz=out.size();
    if(sz)
    {
        ans=0;
        for(i=1; i<=2; i++)
        {
            sort(out.begin(),out.end());
            v = out[out.size()-1];
            ans = ans | v;
            for(j=32; j>0; j--)
            {
                ll x = 1<<j;
                for(ll k=0; k<out.size(); k++)
                {
                        out[k] |= v;
                        out[k] ^= v;
                }
            }
        }
    }
    cout << ans<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


