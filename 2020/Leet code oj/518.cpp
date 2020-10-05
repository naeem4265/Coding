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

class Solution {
public:
    int n,dp[505][5005];
    vector<int> coin;
    int change(int amount, vector<int>& coins)
    {
        n = coins.size();
        memset(dp,-1,sizeof(dp));
        for(int i=0; i<n; i++)
        {
            int a=coins[i];
            coin.push_back(a);
        }

        return rec(0,amount);
    }
    int rec(int i,int a)
    {
        if(a==0) return 1;
        if(i==n) return 0;
        if(dp[i][a]>-1) return dp[i][a];
        int mn1=0,mn2=0;
        mn1 = rec(i+1,a);
        if(a>=coin[i])
            mn2 = rec(i,a-coin[i]);
        dp[i][a] = mn1+mn2;  //cout <<i<<" "<<a<<" "<<mn1<<" "<<mn2<<endl;
        return dp[i][a];
    }
};

int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt,amount;
    cin >> tt;
    vector<int> coins(tt);
    for(t=0; t<tt; t++)
        cin >> coins[t];
    cin >> amount;
    Solution ob;
    cout <<ob.coinChange(coins,amount)<<endl;
    return 0;
}



