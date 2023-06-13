class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        long long int i,j,k,Mod=1e9+7,base = 29,pw;
        int ans = 0;
        map<long long int, int>mp;
        for(i=0; i<n; i++)
        {
            long long int temp = 0;
            for(j=0,pw=0; j<n; j++,pw++)
            {
                temp = (temp+grid[i][j]*bigmod(base, pw, Mod))%Mod;
            }
            mp[temp]++;
        }
        for(j=0; j<n; j++)
        {
            long long int temp = 0;
            for(i=0,pw=0; i<n; i++,pw++)
            {
                temp = (temp+grid[i][j]*bigmod(base, pw, Mod))%Mod;
            }
            ans += mp[temp];
        }
        return ans;
    }
    long long int bigmod(long long int b, long long int p, long long m)
    {
        if(p==0)   return 1;
        long long int ans = bigmod(b, p/2, m);
        ans = (ans*ans)%m;
        if(p&1)
            return (ans*b)%m;
        else
            return ans;
    }
};
