class Solution {
public:
    vector<int> g[205];
    bool vis[205];
    int findCircleNum(vector<vector<int>>& isConnected) {
        int node = isConnected.size();
        memset(vis, 0, sizeof(vis));
        int ans = 0;

        for(int i=0; i<node; i++)
        {
            for(int j=0; j<node; j++)
            {
                if(isConnected[i][j])
                {
                    g[i].push_back(j);
                    g[j].push_back(i);
                }
            }
        }
        for(int i=0; i<node; i++)
        {
            if(vis[i]==0)
            {
                dfs(i);
                ans++;
            }
        }
        return ans;
    }
    void dfs(int u)
    {
        vis[u] = 1;
        for(int v: g[u])
        {
            if(vis[v])   continue;
            dfs(v);
        }
    }
};
