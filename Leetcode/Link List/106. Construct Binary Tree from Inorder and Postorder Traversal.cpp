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
public:
    int n;
    map<int,int> mp;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        n = inorder.size();
        for(int i=0; i<n; i++)   mp[inorder[i]] = i+1;
        return rec(0, n-1, inorder, postorder);
    }



    TreeNode* rec(int l, int r, vector<int> &inorder, vector<int>& postorder){
        bool vis[n+5];
        memset(vis, 0, sizeof(vis));
        for(int i=l; i<=r; i++)   vis[mp[inorder[i]]] = 1;
        for(int i=n-1; i>=0; i--){
            if(vis[mp[postorder[i]]]){
                vis[mp[postorder[i]]] = 0;
                break;
            }
        }
        int i;
        for(i=l; vis[mp[inorder[i]]]; i++);

        TreeNode *Tree = new TreeNode();
        Tree -> val = inorder[i];
        Tree -> left = NULL;
        Tree -> right = NULL;
        if(l<i)   Tree->left = rec(l, i-1, inorder, postorder);
        if(i<r)   Tree->right = rec(i+1, r, inorder, postorder);
        return Tree;
    }
};
