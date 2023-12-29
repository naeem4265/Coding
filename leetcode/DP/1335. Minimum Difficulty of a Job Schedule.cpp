class Solution {
public:
    int n;
    
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        n = jobDifficulty.size();
        if( d > n ) {
            return -1;
        }
        int dp[11][302];
        memset(dp, -1, sizeof(dp) );
        return difficulty( 0, 0, d, jobDifficulty, dp ) ;
    }
    int difficulty( int day, int pos, int &d, vector<int> &jobDifficulty, int (&dp)[11][302] )  {
        if( day == d ) {
            if( pos == n )   return 0;
            return 1e9;
        }
        if( pos== n ) {
            return 1e9;
        }
        if( dp[day][pos] != -1 )     return dp[day][pos];
        int mx = jobDifficulty[pos], temp = 1e9;
        dp[day][pos] = 1e9;
        for(int i = pos; i < n; i++ ) {
            if( mx < jobDifficulty[i] )   mx = jobDifficulty[i];
            temp = difficulty( day+1, i+1, d, jobDifficulty, dp);
            if( dp[day][pos] > (temp+mx ) )     dp[day][pos] = temp+mx;
        }
        return dp[day][pos];
    }
};