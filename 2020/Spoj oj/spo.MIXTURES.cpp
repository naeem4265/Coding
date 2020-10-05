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
ll cum[101];
ll dp[101][101];
ll rec(int l,int r)
{
    if(l==r) return 0;
    if(dp[l][r]>=0) return dp[l][r];
    ll ans = 1e18;
    for(int i=l; i<r; i++)
    {
        ll left=(cum[i]-cum[l-1])%100,right=(cum[r]-cum[i])%100;
        ll mn = rec(l,i)+rec(i+1,r)+left*right;
        ans = min(ans,mn);   //cout <<l<<' '<<i<<' '<<r<<' '<<mn<<' '<<left<<" "<<right<<" "<<ans<<endl;
    }
    return dp[l][r]=ans;
}
void solve(int t)
{
    ll i,j,n,m;
    while(cin >> n)
    {
        cum[0]=0;
        memset(dp,-1,sizeof(dp));
        for(i=1; i<=n; i++)
        {
            cin >> m;
            cum[i] = cum[i-1]+m;
        }
        cout << rec(1,n) <<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

