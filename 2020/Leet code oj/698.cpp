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
    int n,D[18],sum;
    bool vis[18];
    bool canPartitionKSubsets(vector<int>& nums, int k)
    {
        int i,j,m;
        n = nums.size();
        sum = 0;
        for(i=0; i<n; i++)
        {
            D[i] = nums[i];
            sum += D[i];
            vis[i] = 0;
        }
        sort(D,D+n);
        reverse(D,D+n);
        if(sum%k)
        {    //cout <<n<<" "<<sum<<"  gggggg "<<k<<endl;
            return 0;
        }
        sum = sum/k;
        for(i=0; i<k; i++)
        {
            bool x = dfs(0,sum); // cout <<i<<" "<<x<<endl; for(j=0; j<n; j++) cout <<vis[j]<<" "; cout <<endl;
            if(x==0)
                return x;
        }
        return 1;
    }

    bool dfs(int pos,int m)
    {
        if(m==0) return 1;
        for(int i=0; i<n; i++)
        {
            if(vis[i]==0 && m>=D[i])
            {
                vis[i] = 1;
                bool x = dfs(0,m-D[i]);
                if(x) return x;
                vis[i] = 0;
            }
        }
        return 0;
    }

};

int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1,k;
    cin >> tt >> k;
    vector<int> vec(tt);
    for(t=0; t<tt; t++)
        cin >> vec[t];
    Solution ob;
    cout <<ob.canPartitionKSubsets(vec,k)<<endl;
    return 0;
}

/*
8 4
5 4 3 3 2 2 1 5
*/
