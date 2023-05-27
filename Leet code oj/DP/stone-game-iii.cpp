class Solution {
public:
    int csum[50005], dp[50005], n;
    string stoneGameIII(vector<int>& stoneValue) {
        n = stoneValue.size();
        for(int i=0; i<=n; i++)   dp[i] = -1e9;
        csum[n] = 0;
        for(int i=n-1; i>=0; i--)
            csum[i] = csum[i+1] + stoneValue[i];

        int bob = rec(0, stoneValue);   cout <<" here "<<bob<<endl;
        if(bob*2 == csum[0])        return "Tie";
        else if(bob*2 > csum[0])    return "Bob";
        else                        return "Alice";
    }
    int rec(int pos, vector<int> &stoneValue)
    {
        if(pos>=n)   return 0;
        if(dp[pos] != -1e9)  return dp[pos];
        int sum = 0;
        for(int i=0; i<3; i++)
        {
            if(pos+i >= n)  break;
            sum += stoneValue[pos+i];
            dp[pos] = max(dp[pos], sum+rec(pos+i+1, stoneValue));
        }
        return dp[pos] = csum[pos]-dp[pos];
    }
};
