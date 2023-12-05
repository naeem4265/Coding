class Solution {
public:
    int n, cost[105][105];
    int fx[8] = {-1, 0, 1, 0, -1, -1, 1, 1};
    int fy[8] = {0, 1, 0, -1, -1, 1, 1, -1};
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        memset(cost, 0, sizeof(cost));
        n = grid.size();   
        
        cost[0][0] = 1;
        bfs(grid);
        
        if(grid[0][0]==1 || grid[n-1][n-1]==1 || cost[n-1][n-1]==0)
            return -1;
        return cost[n-1][n-1];
    }
    void bfs(vector<vector<int>>& grid)
    {
        queue<pair<int,int> > q;
        q.push({0,0});
        while(!q.empty())
        {
            pair p = q.front();   
            q.pop();
            int u=p.first,v=p.second;
            for(int i=0; i<8; i++)
            {
                u = p.first+fx[i];   
                v = p.second+fy[i];      
                if(u>=n || u<0 || v>=n || v<0 || grid[u][v] || cost[u][v])   continue;
                cost[u][v] = cost[p.first][p.second]+1;
                q.push({u,v});  
            }
        }
    }
};
