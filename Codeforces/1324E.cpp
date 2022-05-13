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
#define limit 2002
using namespace std;

ll n, h, l, r;
ll a[limit],dp[limit][limit];

ll rec(ll pos, ll t)
{
    if(dp[pos][t]!=-1)   return dp[pos][t];
    if(pos==n)
        return 0;
    ll ans, ans2;
    ll temp = (t+a[pos]-1)%h;
    ans = rec(pos+1, temp);
    if(temp>=l && temp<=r)
        ans++;
    temp = (t+a[pos])%h;
    ans2 = rec(pos+1, temp);
    if(temp>=l && temp<=r)
        ans2++;
        //cout <<pos<<" "<<t<<" "<<ans<<" "<<ans2<<" "<<temp<<" "<<a[pos]<<endl;
    return dp[pos][t] = max(ans, ans2);
}

void solve(ll tt)
{
    ll i,j;
    cin >> n >> h >> l >> r;
    for(i=0; i<n; i++)
        cin >> a[i];
    memset(dp, -1, sizeof(dp));
    cout << rec(0,0) <<endl;
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
