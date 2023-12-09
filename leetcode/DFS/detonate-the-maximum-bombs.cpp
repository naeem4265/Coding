class Solution {
public:
    int n, ans= 1,in[105], out[105] ,cnt;
    vector<int> g[105];
    bool vis[105];
    
    int maximumDetonation(vector<vector<int>>& bombs) {
        n = bombs.size();
        memset(vis, 0, sizeof(vis));
        memset(in, 0, sizeof(in));
        memset(out, 0, sizeof(out));
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==j)    continue;
                long long x1=bombs[i][0],x2=bombs[j][0],y1=bombs[i][1],y2=bombs[j][1];
                long long d = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
                long long temp = bombs[i][2];  
                if(d<=temp*temp){
                    g[i].push_back(j);
                    in[j]++;
                    out[i]++;
                }   
            }
        }
        //time complexity for this code is n^3. We can optimize it to n^2 by doing stringly connected component(SCC);
        for(int i=0; i<n; i++)
        {
            cnt = 0;
            memset(vis, 0, sizeof(vis));
            dfs(i);   
        }
        return ans;
    }
    void dfs(int u)
    {
        vis[u] = 1;
        cnt++;            
        if(ans<cnt)  ans = cnt;
        for(int i=0; i<g[u].size(); i++)
        {
            int v = g[u][i];
            if(vis[v]==0)   dfs(v);
        }
    }
};
