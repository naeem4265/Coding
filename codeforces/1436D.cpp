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
vector<ll>g[limit];
ll ct[limit],dp[limit],leaf[limit];
ll ans;

void dfs(ll u)
{
    if(g[u].size()==0)
    {
        leaf[u] = 1;
        dp[u] = ct[u];
        ans = max(ans,ct[u]);
        return ;
    }
    dp[u] = ct[u];
    for(ll v:g[u])
    {
        dfs(v);
        leaf[u] += leaf[v];
        dp[u] += dp[v];
    }
    ll x = dp[u]/leaf[u];
    if(dp[u]%leaf[u]) x++;
    ans = max(ans,x);
}

void solve(int t)
{
    ll i,j,n,m,k,u;
    cin >> n ;
    for(i=2; i<=n; i++)
    {
        cin >> u ;
        g[u].pb(i);
    }
    for(i=1; i<=n; i++)
        cin >> ct[i];
    dfs(1);
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

