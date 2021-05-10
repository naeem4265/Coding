#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll dp[limit];

ll rec(ll n)
{        //cout << n << endl;
    if(n==0 || n==1) return 1;
    if(dp[n]!= -1) return dp[n];
    ll x = 0;
    for(ll i=min(6LL,n); i>0; i--)
    {
        x = (x+rec(n-i))%Mod;
    }
    return dp[n] = x;
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    //recursive way
//    memset(dp,-1,sizeof(dp));
//    cout << rec(n) << endl;

    //iterative way
    for(i=0; i<=n; i++)   dp[i] = 0;
    dp[0] = dp[1] = 1;
    for(i=2; i<=n; i++)
    {
        for(j=min(6LL,i); j>0; j--)
        {
            dp[i] = (dp[i]+dp[i-j])%Mod;
        }
    }
    cout << dp[n] << endl;
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
