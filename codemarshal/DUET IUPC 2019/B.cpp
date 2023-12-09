#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
bool vis[limit];
vector<ll> pf[limit];

void seive()
{
    vis[0] = vis[1] = 1;
    for(ll i=2; i<limit; i+=2)
    {
        pf[i].pb(2);
        vis[i] = 1;
    }
    for(ll i=3; i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(ll j=i; j<limit; j+=i)
        {
            pf[j].pb(i);
            vis[j] = 1;
        }
    }
}
priority_queue<pair<ll,ll> > pq[limit];
ll dp[limit];

void solve(ll tt)
{
    ll i,j,n,k;
    scanf("%d %d", &n, &k);
    ll d[n+5];

    for(i=1; i<=n; i++)
    {
        scanf("%d", &d[i]);
        for(ll p: pf[d[i]])
        {
            while(!pq[p].empty())  pq[p].pop();
        }
    }
    dp[0] = -1;
    for(i=1; i<=n; i++)
    {
        dp[i] = dp[i-1]+1;
        for(ll p: pf[d[i]])
        {
            while(!pq[p].empty() && (i-pq[p].top().second)>k)   pq[p].pop();
            if(!pq[p].empty())
            {
                dp[i] = min(dp[i], -pq[p].top().first+1);
            }
        }
        for(ll p: pf[d[i]])
        {
            pq[p].push({-dp[i], i});
        }
    }
    printf("Case %d: %d\n",tt, dp[n]);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    ll t,tt=1;
    scanf("%d", &tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
