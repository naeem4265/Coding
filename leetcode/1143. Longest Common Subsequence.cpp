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
    int n,m;
    int dp[1001][1001];
    string s,w;
    int longestCommonSubsequence(string text1, string text2)
    {
        n = text1.size();
        m = text2.size();
        s = text1;
        w = text2;
        memset(dp,-1,sizeof(dp));
        return rec(0,0);
    }
    int rec(int i,int j)
    {
        if(i==n || j==m) return 0;
        if(dp[i][j]>=0) return dp[i][j];
        if(s[i]==w[j])
        {
            dp[i][j] = 1+rec(i+1,j+1);
            return dp[i][j];
        }
        dp[i][j] = max(rec(i+1,j),rec(i,j+1));
        return dp[i][j];
    }
};
int  main()
{
//    Fast
//    Freed
//    Fout
    string text1,text2;
    cin >> text1 >> text2;
    Solution ob;
    cout <<ob.longestCommonSubsequence(text1,text2)<<endl;

    return 0;
}

