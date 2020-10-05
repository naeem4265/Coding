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

class Solution
{
public:
    int n,sum=0,num[205];
    int dp[201][20002];
    bool canPartition(vector<int>& nums)
    {
        n = nums.size();
        for(int i=0; i<n; i++)
        {
            num[i]=nums[i];
            sum += nums[i];
        }
        if(sum&1) return false;
        memset(dp,-1,sizeof(dp));
        return rec(0,sum/2);
    }
    int rec(int i,int w)
    {
        if(w==0) return 1;
        if(i==n) return 0;
        if(dp[i][w]>=0)
            return dp[i][w];
        int y=0,z=0;
        if(w>=num[i])
        {
            y = rec(i+1,w-num[i]);
        }
        z = rec(i+1,w);
        dp[i][w] = y||z;
        return z||y;
    }
};

int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    vector<int> num(tt);
    for(t=0; t<tt; t++)
        cin >> num[t];
    Solution ob;
    cout <<ob.canPartition(num)<<endl;
    return 0;
}


