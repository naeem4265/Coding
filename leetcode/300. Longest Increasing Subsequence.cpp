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
    int findLongestChain(vector<vector<int> >& pairs)
    {
        int n=pairs.size(),i,j,ans=0,ans2=0;
        int dp[n+5];
        for(i=0; i<n ;i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(pairs[i][0]>pairs[j][0])
                {
                    swap(pairs[i][0],pairs[j][0]);
                    swap(pairs[i][1],pairs[j][1]);
                }
                if(pairs[i][0]==pairs[j][0])
                {
                    if(pairs[i][1]>pairs[j][1])
                    {
                        swap(pairs[i][0],pairs[j][0]);
                        swap(pairs[i][1],pairs[j][1]);
                    }
                }
            }
        }
        for(i=0;i<n;i++) dp[i]=1;
        for(i=n-1; i>=0; i--)
        {
            for(j=i-1; j>=0; j--)
            {
                if(pairs[i][0]>pairs[j][1])
                    dp[j] = max(dp[j],dp[i]+1);
            }
        }
        for(i=0; i<n; i++)
            ans2 = max(ans2,dp[i]);  //cout <<ans<<" "<<ans2<<endl;
        return ans2;
    }
};
int  main()
{
//    Fast
//    Freed
//    Fout
    int i,n,m=2;
    cin >> n;
     vector<vector<int> > pairs( n , vector<int> (m, 0));
    for(i=0; i<n; i++)
    {
        int a,b;
        cin >> pairs[i][0];
        cin >> pairs[i][1];
    }
    Solution ob;
    cout <<ob.findLongestChain(pairs)<<endl;
    return 0;
}

/*
3
1 2 2 3 3 4
3
3 4 2 3 1 2
8
7 9
4 5
7 9
-7 -1
0 10
3 10
3 6
2 3
*/

