#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 2002
using namespace std;
ll w[limit],p[limit],n;
ll dp[limit][limit];
ll knapsank(ll i,ll W)
{
    if(i==n) return 0;
    if(dp[i][W]>=0) return dp[i][W];
    ll z1=0,z2=0;
    z1 = knapsank(i+1,W);
    if(W>=w[i])
        z2 = p[i]+knapsank(i+1,W-w[i]);
    dp[i][W]= max(z1,z2);
    return dp[i][W];
}

void solve(int t)
{
    ll i,j,s;
    cin >> s >> n;
    memset(dp,-1,sizeof(dp));
    for(i=0; i<n; i++)
        cin >> w[i] >> p[i];
    cout <<knapsank(0,s)<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


