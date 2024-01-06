class Solution {
public:
    long long int dp[1002][1002], Mod = 1e9+7;
    int numOfWays(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));

        return ( way( nums ) - 1 + Mod ) % Mod;
    }

    long long int way( vector<int>& nums ) {
        if( nums.size() == 0 )    return 1;
        vector<int> left, right;
        for( int i=1; i<nums.size(); i++ ) {
            if( nums[i] > nums[0] )   right.push_back( nums[i] );
            else                      left.push_back( nums[i] );
        }
        long long int cnt = nCr( left.size()+right.size(), left.size());
        cnt = ( cnt * way( left) ) % Mod;
        cnt = ( cnt * way( right) ) % Mod;
        return cnt;
    }

    long long int nCr( long long int n, long long int r ) {
        if( r > n )   return 0;
        if( r==0 )    return 1;
        if( n==r )    return 1;
        if( dp[n][r] != -1 )    return dp[n][r];
        return dp[n][r] = ( nCr(n-1, r-1) + nCr(n-1, r) ) % Mod;
    }
};