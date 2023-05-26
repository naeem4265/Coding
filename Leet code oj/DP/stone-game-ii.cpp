class Solution {
public:
    int n, csum[105], dp[105][105][2];
    
    int stoneGameII(vector<int>& piles) {
        n = piles.size();
        memset(dp, -1, sizeof(dp));
        
        csum[n] = 0;
        
        for(int i=n-1; i>=0; i--)  csum[i] = csum[i+1]+piles[i];
        
        int ans = rec(0, 1, 1, piles);
        return csum[0]-ans;
    }
    int rec(int pos, int m, int alice, vector<int> &piles )
    {       //cout <<pos<<" "<<m<<" "<<alice<<endl;
        if(pos>=n)   
        {
            return 0;
        }
        if(dp[pos][m][alice] != -1)    return dp[pos][m][alice];
        int sum=0;
        for(int i=0; i<2*m && pos+i<n; i++)
        {
            sum += piles[pos+i];
            int temp = rec(pos+i+1, max(m, i+1), !alice, piles);
            dp[pos][m][alice] = max(sum + temp, dp[pos][m][alice]);
        }      
        dp[pos][m][alice] = csum[pos]-dp[pos][m][alice];
        return dp[pos][m][alice];
    }
};
