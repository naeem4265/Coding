class Solution {
public:
    vector<int> g[100005];
    int ans = 0;
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        for(int i=0; i<n; i++)
        {
            if(i==headID)   continue;
            g[manager[i]].push_back(i);
        }
        dfs(headID, 0, informTime);
        return ans;
    }
    void dfs(int u, int t, vector<int> &informTime)
    {
        ans = max(ans, t);
        for(int v: g[u])
        {
            dfs(v, t+informTime[u], informTime);
        }
    }
};
