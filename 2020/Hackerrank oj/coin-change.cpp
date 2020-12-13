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
ll coin[55];
ll m,dp[55][255];

ll rec(ll pos,ll w)
{
    if(w==0)    return 1;
    if(pos==m)  return 0;
    if(w<coin[pos]) return 0;
    if(dp[pos][w]!=-1) return dp[pos][w];
    dp[pos][w] = rec(pos,w-coin[pos])+rec(pos+1,w);   //cout <<pos<<" "<<w<<" "<<dp[pos][w]<<endl;
    return dp[pos][w];
}

void solve(ll t)
{
    ll i,j,n,k;
    cin >> n >> m;
    memset(dp,-1,sizeof(dp));

    for(i=0; i<m; i++)
        cin >> coin[i];
    sort(coin,coin+m);
    cout <<rec(0,n)<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


