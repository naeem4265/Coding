#include<bits/stdc++.h>
#define Mod 1000000007

using namespace std;

int main()
{
    int i,j,x,n;
    //cin >> n >> x ;
    scanf("%d %d", &n, &x);
    int coin[n+2];
    int dp[x+2];
    for(i=0; i<n; i++)
    {
        //cin >> coin[i];
        scanf("%d", &coin[i]);
    }
    sort(coin,coin+n);
    reverse(coin,coin+n);
    for(i=0; i<=x; i++)
        dp[i] = Mod;
    dp[0] = 0;
    for(i=coin[n-1]; i<=x; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i>=coin[j] && dp[i-coin[j]]>=0)
            {
                //dp[i] = min(dp[1+dp[i-coin[j]];  cout <<i<<" "<<dp[i]<<endl;
                if(dp[i]>dp[i-coin[j]]+1)
                    dp[i] = 1+dp[i-coin[j]];
            }
        }
    }

    //x = rec(0,x);
    if(dp[x]>=Mod)
        dp[x] = -1;
    //cout << x <<endl;
    printf("%d\n", dp[x]);
    return 0;
}
