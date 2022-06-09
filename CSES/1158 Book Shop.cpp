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

ll n,dp[1002][limit],h[1005],s[1005];

ll rec(ll pos,ll x)
{
    if(pos==n)  return 0;
    if(dp[pos][x]!=-1)  return dp[pos][x];
    if(x>=h[pos])
        dp[pos][x] = s[pos]+rec(pos+1, x-h[pos]);
    if(dp[pos][x] < rec(pos+1, x))
        dp[pos][x] = rec(pos+1, x);
    return dp[pos][x];
}

void solve(ll tt)
{
    ll i,j,x;
    scanf("%d %d", &n, &x);
    for(i=0; i<n; i++)
    {
        scanf("%d", &h[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d", &s[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<=x; j++)
            dp[i][j] = -1;
    }
    printf("%d\n", rec(0,x));

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
