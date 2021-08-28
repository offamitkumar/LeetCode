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
    pair<int,int>ans;
    void dfs(TreeNode*root , int height) {
        if (root->left == nullptr and root->right == nullptr) {
            if (height>ans.second) {
                ans.first = root->val; 
                ans.second = height;
            }
            return;
        }
        if (root->left) 
            dfs(root->left , height+1);
        if (root->right)
            dfs(root->right, height+1);
    }
public:
    int findBottomLeftValue(TreeNode* root) {
        ans.second = numeric_limits<int>::min();
        dfs(root,0);
        return ans.first;
    }
};
