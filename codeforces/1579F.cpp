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
ll dp[limit],n,d;
bool a[limit];

ll rec(ll pos)
{
    if(dp[pos]==0)
        return Mod;
    if(dp[pos]>0) return dp[pos];
    if(a[pos]==0) return 0;
    dp[pos] = 0;
    return dp[pos] = 1+rec((pos+d)%n);
}

void solve(ll tt)
{
    ll i,j;
    string s;
    cin >> n >> d;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        dp[i]=-1;
    }
    ll ans = 0;
    for(i=0; i<n; i++)
    {
        ans = max(ans,rec(i));
    }
    if(ans>=Mod) ans = -1;
    cout << ans <<endl;

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
