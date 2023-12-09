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
    long long int dp[105][105],r,c;
    long long int uniquePaths(long long int m, long long int n)
    {
        memset(dp,0,sizeof(dp));
        r = m;
        c = n;
        return rec(1,1);
    }
    long long int rec(long long int i,long long int j)
    {
        if(i==r || j==c)
            return 1;
        if(dp[i][j]) return dp[i][j];
        return dp[i][j] = rec(i+1,j)+rec(i,j+1);
    }
};
int  main()
{
//    Fast
//    Freed
//    Fout
    ll m,n;
    cin >> m >> n;
    Solution ob;
    cout <<ob.uniquePaths(m,n)<<endl;
    return 0;
}

