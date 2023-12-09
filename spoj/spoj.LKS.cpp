#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
void solve(int t)
{
    int i,j,n,W;
    scanf("%d %d", &W, &n);
    int wt[n+2],val[n+2];
    for(i=0; i<n; i++)
        scanf("%d %d", &val[i], &wt[i]);
    ///Optimized 0-1 knapsank
    int dp[W+1];
    memset(dp, 0, sizeof(dp));
    for(int i=0; i < n; i++)
    {
        for(int j=W; j>=wt[i]; j--)
        {
            dp[j] = max(dp[j] , val[i] + dp[j-wt[i]]);
        }
    }
    ///end here. n<=500,W<=2000000

    printf("%d\n",dp[W]);
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

