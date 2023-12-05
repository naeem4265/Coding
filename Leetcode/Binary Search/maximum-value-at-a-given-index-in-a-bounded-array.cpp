class Solution {
public:
    int maxValue(long long int n, long long int index, int maxSum) {
        long long int lo = 0, hi = 1e9, m, ans=0;
        maxSum -= n;
        while(lo<=hi)
        {
            m = (lo+hi)/2LL;
            long long int x = min(m-1, index);
            long long int sum = x*(2LL*(m-1)+(1-x))/2LL;

            x = min(m, n-index);
            sum += x*(2LL*m+(1-x))/2LL;  cout <<m<<" "<<sum<<" "<<maxSum<<endl;
            if(sum<=maxSum)
            {
                ans = m;
                lo = m+1;
            }
            else
                hi = m-1;
        }
        return ans+1;
    }
};
