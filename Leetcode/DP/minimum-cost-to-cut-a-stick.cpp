class Solution {
public:
    int m, dp[105][105];
    int minCost(int n, vector<int>& cuts) {
        
        for(int i=0; i<105; i++)
            for(int j=0; j<105; j++)
                dp[i][j] = 1e9;
        cuts.push_back(0);
        cuts.push_back(n);
        m = cuts.size();
        sort(cuts.begin(), cuts.end());
        
        return rec(0, m-1, cuts);
    }
    int rec(int l, int r, vector<int> &cuts)
    {
        if((l+1)==r)   return 0;
        if(dp[l][r] != 1e9)     return dp[l][r];
        
        for(int i=l+1; i<r; i++)
        {
            dp[l][r] = min(dp[l][r], cuts[r]-cuts[l] + rec(l, i, cuts) + rec(i, r, cuts));
        }
        return dp[l][r];
    }
};
