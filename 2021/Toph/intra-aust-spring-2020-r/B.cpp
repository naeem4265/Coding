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
ll dp[36];


void solve(ll t)
{
    ll i,j,n,m,k;
    ll s;
    cin >> s ;
    for(i=0; i<s; i++)
    {
        cin >> n;
        cout << dp[n] << endl;
    }
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    dp[0] = dp[1] = 1;
    dp[2] = 2;
    dp[3] = 5;
    for(ll i=4; i<17; i++)
    {
        for(ll j=0,k=i-1; j<i; j++,k--)
            dp[i] += dp[j] * dp[k];
    }
    //for(ll i=0; i<17; i++) cout <<i<<" "<<dp[i] <<endl;
    ll tt,t;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        solve(t);
    }
    return 0;
}
