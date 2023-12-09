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
vector<ll> one;
ll m,n,d[limit];
ll dp[limit][limit];

ll rec(ll from, ll to)
{
    if(from>=m) return 0;
    if(to>n)  return Mod;
    if(dp[from][to]!=-1) return dp[from][to];
    ll x = Mod,y;
    if(d[to]==0) x = abs(one[from]-to)+rec(from+1,to+1);
    y = rec(from, to+1);
    return dp[from][to] = min(x,y);
}

void solve(ll t)
{
    ll i,j;
    cin >> n ;
    memset(dp,-1,sizeof(dp));
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        if(d[i]) one.pb(i);
    }
    m = one.size();
    cout << rec(0,1) << endl;
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
