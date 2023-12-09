#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll n,a[105],b[105];
ll total,dp[105][10005];

ll rec(ll pos, ll suma)
{
    if(pos==n)
        return suma*suma+(total-suma)*(total-suma);
    if(dp[pos][suma]!=-1)
        return dp[pos][suma];
    return dp[pos][suma] = min(rec(pos+1, suma+a[pos]), rec(pos+1, suma+b[pos]));
}

void solve(ll tt)
{
    ll i,j,m,k,q;
    string s;
    cin >> n;
    ll ans = 0;
    memset(dp,-1, sizeof(dp));
    total = 0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        total += a[i];
        ans += (n-2)*a[i]*a[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> b[i];
        total += b[i];
        ans += (n-2)*b[i]*b[i];
    }
    ans += rec(0,0);
    if(n==1)  ans = 0;
    cout << ans <<endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

