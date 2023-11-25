class Solution {
public:
    int column[305];
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        int ans = 0;
        for(int j=0; j<=m; j++)  column[j] = 0;

        for(int i=0; i<n; i++) {
            stack<pair<int, int> > stk;
            int last = 0, j;
            for(j=0; j<m; j++) {
                last = j;
                if( matrix[i][j]=='1' ) column[j]++;
                else column[j] = 0;   //cout <<i<<" "<<j<<" "<<column[j]<<endl;
                while( !stk.empty() && stk.top().first >= column[j] ) {
                    last = stk.top().second;
                    int a = min(j-last, stk.top().first);
                    // ans = max(ans, (j-last)*stk.top().first);   // for rectangle
                    ans = max(ans, a*a);
                    stk.pop();
                }
                stk.push({column[j], last});
            }
            while( !stk.empty()) {
                last = stk.top().second;
                int a = min(j-last, stk.top().first);
                // ans = max(ans, (j-last)*stk.top().first);   // for rectangle
                ans = max(ans, a*a);
                stk.pop();
            }
            cout <<i<<" "<<ans<<endl;
        }
        return ans;
    }
};