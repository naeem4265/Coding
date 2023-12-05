public class Solution {
    public int CountNegatives(int[][] grid) {
        int n = grid.Length;
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            int m = grid[i].Length;
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]<0)  ans++;
            }
        }
        return ans;
    }
}
