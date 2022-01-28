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
    int depth(TreeNode*root) {
        if (root == nullptr) return 0; 
        return max(depth(root->left), depth(root->right)) + 1; 
    }
    vector<vector<int>>res; 
    void dfs(TreeNode*root, int dep) {
        if (root == nullptr) return; 
        res[dep].push_back(root->val); 
        dfs(root->left, dep-1); 
        dfs(root->right, dep-1); 
    }
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int dep = depth(root); 
        res.resize(dep); 
        dfs(root, dep-1); 
        return res; 
    }
};
