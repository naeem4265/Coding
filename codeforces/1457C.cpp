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
ll n,k,dp[limit],x,y;
string s;

ll rec(ll pos)
{
    if(pos>=n) return 0;
    if(dp[pos]!=-1) return dp[pos];
    ll b;
    if(s[pos]=='1')
        b = rec(pos+k);
    else
        b = x+rec(pos+k);       //cout <<pos<<" "<<a<<' '<<b<<endl;
    return dp[pos] = b;
}

void solve(int t)
{
    ll i,j,m,p;
    cin >> n >> p >> k;
    for(i=0; i<n+5; i++)
        dp[i] = -1;
    cin >> s;
    cin >> x >> y;
    ll ans=1e18;
    for(i=p-1,j=0; i<n; i++,j++)
    {
        m = y*j+rec(i);  //cout <<i<<" main "<<m<<' '<<ans<<endl;
        ans = min(ans,m);
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

