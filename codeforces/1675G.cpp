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
ll d[255],n,m;
ll dp[255][255][255];
ll rec(ll pos, ll rem, ll pre)
{
    if(pos<1)   return 0;
    if(dp[pos][rem][pre]!=-1)    return dp[pos][rem][pre];
    if(rem<d[pos+1])   return Mod;

    dp[pos][rem][pre] = Mod;
    for(ll i=d[pos+1]; i<=rem; i++)
    {
        ll temp1 = d[pos];
        ll temp2 = d[pos-1];
        ll ct = abs(d[pos]-i);
        d[pos-1] += (d[pos]-i);
        d[pos] = i;
        ll x =  rec(pos-1, rem-i, i);
        if(dp[pos][rem][pre]>(ct+x))
            dp[pos][rem][pre] = ct+x;
        d[pos] = temp1;
        d[pos-1] = temp2;
    }

    return dp[pos][rem][pre];
}

void solve(ll tt)
{
    ll i,j;
    memset(dp, -1, sizeof(dp));
    scanf("%d %d", &n, &m);
    d[n+1] = 0;
    for(i=1; i<=n; i++)   scanf("%d", &d[i]);
    rec(n, m, 0);
    printf("%d\n",dp[n][m][0]);

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
