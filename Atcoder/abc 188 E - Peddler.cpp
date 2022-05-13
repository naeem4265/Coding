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
ll mn[limit],mx[limit];
vector<ll> g[limit];

void dfs(ll u)
{
    ll cost = min(mn[u],mx[u]);
    for(auto v:g[u])
    {
        if(mn[v]>cost)
        {
            mn[v] = cost;  //cout <<u<<" "<<v<<' '<<mn[v]<<" "<<mx[v]<<endl;
            dfs(v);
        }
    }
}

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n >> m;
    for(i=0; i<limit; i++)
    {
        mn[i] = 1e18;
    }

    for(i=1; i<=n; i++) cin >> mx[i];

    for(i=0; i<m; i++)
    {
        ll u, v;
        cin >> u >> v;
        g[u].pb(v);
    }
    for(i=1; i<=n; i++)
    {
        dfs(i);
    }
    ll ans = -1e18;
    for(i=1; i<=n; i++)
    {
        ans = max(ans,mx[i]-mn[i]);   //cout <<i<<" "<<mn[i]<<' '<<mx[i]<<" "<<ans<<endl;
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
   // cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}

