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
    int ans;
    void dfs(TreeNode*root, int mn, int mx) {
        ans = max(ans , abs(mn-mx)); 
        if (root == nullptr) return; 
        dfs(root->right , min(mn , root->val), max(mx , root->val)); 
        dfs(root->left , min(mn , root->val), max(mx , root->val)); 
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        ans = INT_MIN; 
        dfs(root, root->val, root->val); 
        return ans; 
    }
};
