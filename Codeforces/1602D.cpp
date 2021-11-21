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
ll u[limit],d[limit],n;

ll rec(ll h,ct)
{
    if(h<=0) return ct;
    if(dp[h]==-1) return -1;
    dp[h] = -1;
    for(i)
}

void solve(ll t)
{
    ll i,j,m,k;
    string s;
    cin >> n;
    for(i=1; i<=n; i++){
        cin >> u[i];
    }
    for(i=1; i<=n; i++){
        cin >> d[i];
    }
    ll len = u[n]-d[n];
    for(i=1; i<=len; i++)
    {
        ans = min(ans,rec(n-i,1));
    }
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
