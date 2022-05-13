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
ll dp[205][13],l;

ll rec(ll pos,ll cut)
{
    if(pos>l) return 0;
    if(cut==11) return 1;
    if(dp[pos][cut]!=-1) return dp[pos][cut];
    return dp[pos][cut] = rec(pos+1,cut+1)+rec(pos+1,cut);
}

void solve(ll t)
{
    ll i,j,n,m;
    cin >> l ;
    memset(dp,-1,sizeof(dp));
    cout <<rec(1,0)<<endl;
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

