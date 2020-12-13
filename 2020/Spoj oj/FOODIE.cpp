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
ll dp[105][1005],w[105],n;

ll knapsack(ll pos,ll W)
{
    if(pos==n)
        return 0;
    if(dp[pos][W]!=-1)
        return dp[pos][W];
    ll x,y=0;
    x = knapsack(pos+1,W);
    if(W-w[pos]>=0)
        y = w[pos]+knapsack(pos+1,W-w[pos]);
    return dp[pos][W] = max(x,y);
}

void solve(int t)
{
    ll i,j,m,k;
    memset(dp,-1,sizeof(dp));
    cin >> n >> k;
    for(i=0; i<n; i++)
    {
        cin >> m;
        ll a,sum=0;
        for(j=0; j<m; j++)
        {
            cin >> a;
            sum += a;
        }
        w[i] = sum;
    }
    cout <<knapsack(0,k)<<endl;
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

