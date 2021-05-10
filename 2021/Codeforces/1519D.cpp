#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 5008
using namespace std;
ll ans,temp;
ll a[limit],b[limit];
ll dp[limit][limit];

ll rec(ll l,ll r)
{
    if(l>=r) return 0;
    if(dp[l][r]!=-1) return dp[l][r];
    ll x = a[l]*b[l] + a[r]*b[r];
    ll y = a[r]*b[l] + a[l]*b[r];
    x = y-x;
    x += rec(l+1,r-1);
    ans = max(ans, temp+x);     //cout <<l<<" "<<r<<" "<<ans<<endl;
    return dp[l][r] = x;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    memset(dp,-1,sizeof(dp));
    cin >> n ;
    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    for(i=1; i<=n; i++)
    {
        cin >> b[i];
        temp += a[i]*b[i];
    }
    ans = temp;       // cout <<temp<<endl;
    for(i=1; i<n; i++)
    {
        for(j=n; j>i; j--)
            rec(i,j);
    }
    cout << ans <<endl;
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
/*
5
2 3 2 1 3
1 3 2 4 2
2
13 37
2 4
6
1 8 7 6 3 6
5 9 6 8 8 6
*/
