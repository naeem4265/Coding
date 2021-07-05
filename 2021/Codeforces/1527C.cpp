#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;
ll sum[limit];

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
    }
    map<ll,ll> sum;
    ll dp[n+5];
    dp[0] = 0;
    ll ans = 0;
    for(i=1; i<=n; i++)
    {
        dp[i] = dp[i-1];
        dp[i] += sum[d[i]];
        sum[d[i]] += i;
        ans += dp[i];
    }
    cout << ans << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}
