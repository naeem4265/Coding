class Solution {
public:
    double new21Game(int n, int k, int mxptr) 
    {
       int i;
       double dp[n+5],sum=1.0;

       dp[0] = 1.0;
       for(i=1; i<k; i++)
       {
          if((i-mxptr-1)>=0)
             sum -= dp[i-mxptr-1];
          dp[i] = sum/(double)mxptr;
          sum += dp[i];
       }
       for(; i<=min(n, k+mxptr-1); i++)
       {
          if((i-mxptr-1)>=0)
             sum -= dp[i-mxptr-1];
          dp[i] = sum/(double)mxptr;
       }
       sum =0.0;
       for(i=k; i<=min(n, k+mxptr-1); i++)
          sum += dp[i];
          if(k==0 || n>=k+mxptr-1)
              sum = 1.0;
        return sum;
    }
};
