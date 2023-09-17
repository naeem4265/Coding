#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 5005;
const ll Mod = 1e9+7;
using namespace std;
vector<ll> g[limit], vec;
ll leaf[limit],ans = 0;
ll dp[limit*limit];

bool rec(vector<ll> &vec, ll sum)
{
    for(ll i=0; i<=sum; i++)  dp[i] = 0;
    dp[0] = 1;
    ll sz = vec.size();
    for(ll j=0; j<sz; j++)
    {
        for(ll i=sum; i>=1; i--)
        {
            if(i>=vec[j] && dp[i-vec[j]])
                dp[i] = 1;
        }
    }
    if(dp[sum])   return 1;
    return 0;
}

ll dfs(ll u, ll pr)
{
    leaf[u] = 1;
    for(ll v: g[u])
    {
        if(v==pr)   continue;
        leaf[u] += dfs(v, u);
    }

    ll sum = 0;
    vec.clear();
    ll sz = g[u].size();
    for(ll i=0; i<sz; i++)
    {
        ll v = g[u][i];
        if(v==pr)   continue;
        vec.pb(leaf[v]);
        sum += leaf[v];
    }
    if(vec.size()<=1)   return leaf[u];

    sort(vec.begin(), vec.end());
    rec(vec, sum);
    ll temp = sum/2;
    for(ll i=temp; i>=1LL; i--)
    {
        if(dp[i])
        {
            ans += i*(sum-i);
            return leaf[u];
        }
    }
    return leaf[u];
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;

    //cin >> n;
    scanf("%lld", &n);
    for(i=2; i<=n; i++)
    {
        ll u;
        //cin >> u;
        scanf("%lld", &u);
        g[u].pb(i);
        g[i].pb(u);
    }
    dfs(1, 0);
    //cout << ans <<endl;
    printf("%lld\n", ans);


    return ;
}


int  main()
{
 //   Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}
