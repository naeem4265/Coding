#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 100002
using namespace std;
//cses 1158
/*
///0-1 knapsack O(n*W). W=Total weight, p=profit, w=weight.
ll n,dp[1002][limit],w[1005],p[1005];
ll rec(ll pos,ll W)
{
    if(pos==n)  return 0;
    if(dp[pos][W]!=-1)  return dp[pos][W];
    if(W>=w[pos])
        dp[pos][W] = p[pos]+rec(pos+1, W-w[pos]);
    ll temp = rec(pos+1, W);
    if(dp[pos][W] < temp)
        dp[pos][W] = rec(pos+1, W);
    return dp[pos][W];
}

void solve(ll tt)
{
    ll i,j,W;
    scanf("%d %d", &n, &W);
    for(i=0; i<n; i++)
        scanf("%d", &w[i]);
    for(i=0; i<n; i++)
        scanf("%d", &p[i]);
    memset(dp, -1, sizeof(dp));
    printf("%d\n", rec(0,W));
    return ;
}
*/

///0-1  knapsack O(n*W) memory optimize. W=Total weight, p=profit, w=weight.
ll n,dp[limit],w[1005],p[1005];
void solve(ll tt)
{
    ll i,j,W;
    scanf("%d %d", &n, &W);
    for(i=0; i<n; i++)
        scanf("%d", &w[i]);
    for(i=0; i<n; i++)
        scanf("%d", &p[i]);
    memset(dp, 0, sizeof(dp));

    for(i=0; i<n; i++)
        for(j=W; j>=0; j--)
        {
            if(j<w[i])  continue;
            dp[j] = max(dp[j], p[i]+dp[j-w[i]]);
        }

    printf("%d\n", dp[W]);
    return ;
}

int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
