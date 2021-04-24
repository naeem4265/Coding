#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 2008
using namespace std;
ll dp[limit][limit],d[limit];

ll rec(ll l,ll r)
{
    if(l==r)   return 0;
    if(dp[l][r]!=-1)   return dp[l][r];
    return dp[l][r] = d[r]-d[l]+min(rec(l,r-1),rec(l+1,r));
}

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    memset(dp,-1,sizeof(dp));
    for(i=0; i<n; i++)
        cin >> d[i];
    sort(d,d+n);
    cout << rec(0,n-1) <<endl;
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
