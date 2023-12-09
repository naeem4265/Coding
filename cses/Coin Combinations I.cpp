#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll n,dp[limit],d[105];

ll rec(ll x)
{
    if(x<0)  return 0;
    if(x==0)  return 1;
    if(dp[x]!=-1) return dp[x];
    dp[x] = 0;
    for(ll i=0; i<n; i++)
    {
        dp[x] = (dp[x]+rec(x-d[i]))%Mod;
    }
    return dp[x];
}

void solve(ll tt)
{
    ll i,j,m,k,q;
    ll x;
    cin >> n >> x;
    memset(dp, -1, sizeof(dp));

    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    cout << rec(x)  <<endl;

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
