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
    vector<int> v;
public:
    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        sort(v.begin(), v.end());
        int ans = 1e9;
        for(int i=1; i<v.size(); i++){
            ans = min(ans, v[i]-v[i-1]);  cout <<i<<' '<<v[i]<<endl;
        }
        return ans;
    }
    void dfs(TreeNode *parent){
        if(parent==NULL)   return ;
        v.push_back(parent->val);
        dfs(parent->left);
        dfs(parent->right);
    }
};
