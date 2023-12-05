/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int sum[10005];
public:
    int maxLevelSum(TreeNode* root) {
        for(int i=0; i<10005; i++)
        {
            sum[i] = -(1e9+5);
        }
        dfs(root, 1);
        int mx = -1e9, ans = 0;
        for(int i=1; i<10005; i++)
        {
            if(sum[i]>mx)
            {
                mx = sum[i];   
                ans = i;
            }
        }
        return ans;
    }
    void dfs(TreeNode* parent, int level)
    {
        if(parent==NULL)   return ;
        if(sum[level]==-(1e9+5))   sum[level] = 0;
        sum[level] += parent->val;
        dfs(parent->left, level+1);
        dfs(parent->right, level+1);
    }
};
