#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define Mod2 998244353
const ll limit = 2e5+5;
const ll Mod = 1e9+7;
using namespace std;
vector<ll> g[limit];
ll dp[limit],dp2[limit];

ll bigmod(ll b,ll p, ll mod)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b)%mod;
        b = (b*b)%mod;
        p = p/2;
    }
    return ans;
}

ll dfs(ll u, ll p, ll b, ll mod)
{
    ll sum = 1,ct=1;
    for(ll v: g[u])
    {
        if(v!=p)
        {
            sum = (sum*dfs(v, u, b, mod))%mod;
            ct++;
        }
    }
    dp[u] = (sum+bigmod(b, ct, mod))%mod;
    return dp[u] = (dp[u]+b)%mod;
}
ll dfs2(ll u, ll p, ll b, ll mod)
{
    ll sum = 1,ct=3;
    for(ll v: g[u])
    {
        if(v!=p)
        {
            sum = (sum+dfs2(v, u, b, mod))%mod;
            ct+=2;
        }
    }
    dp2[u] = (sum*bigmod(b, ct, mod))%mod;
    return dp2[u] = (dp2[u]*b)%mod;
}

vector<ll> vec, vec2;
bool check(ll u, ll p)
{
    vec.clear();
    vec2.clear();
    for(ll v: g[u])
    {
        if(v!=p)
        {
            vec.pb(dp[v]);
            vec2.pb(dp2[v]);
        }
    }
    ll m = vec.size();
    if(m==0)    return 1;
    sort(vec.begin(), vec.end());
    sort(vec2.begin(), vec2.end());

    if(m&1)
    {
        ll i,j;
        for(i=1; i<m; i+=2)
        {
            if(vec[i] != vec[i-1])   break;
        }
        for(j=i+1; j<m; j+=2)
        {
            if(vec[j] != vec[j-1])  return 0;
        }
        ll val = vec[i-1];

        for(i=1; i<m; i+=2)
        {
            if(vec2[i] != vec2[i-1])   break;
        }
        for(j=i+1; j<m; j+=2)
        {
            if(vec2[j] != vec2[j-1])  return 0;
        }
        ll val2 = vec2[i-1];

        for(ll v: g[u])
        {
            if(v!=p && val==dp[v] && val2==dp2[v])    return check(v, u);
        }
        return 0;
    }
    else
    {
        for(ll i=1; i<m; i+=2)
        {
            if(vec[i]!=vec[i-1])   return 0;
        }
        for(ll i=1; i<m; i+=2)
        {
            if(vec2[i]!=vec2[i-1])   return 0;
        }
        return 1;
    }
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    for(i=0; i<=n; i++)
    {
        g[i].clear();
    }

    for(i=1; i<n; i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(1, 0, 31LL, Mod);
    dfs2(1, 0, 29LL, Mod2);
  //  for(i=1; i<=n; i++)   cout <<i<<" "<<dp[i]<<endl;  cout <<endl;
  //  for(i=1; i<=n; i++)   cout <<i<<" "<<dp2[i]<<endl;
    if(check(1, 0))
        cout <<"YES\n";
    else
        cout <<"NO\n";

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

