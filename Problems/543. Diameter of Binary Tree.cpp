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
    int max_dia;
    int dfs(TreeNode* root) {
        if (root == nullptr) 
            return 0;
        if (root->right == nullptr && root->left == nullptr)
            return 0;
        int left = dfs(root->left); 
        int right = dfs(root->right); 
        if (root->right != nullptr && root->left != nullptr) {
            max_dia = max(max_dia , left + right + 2);
        }
        max_dia = max(max_dia , max(left,right)+1); 
        return max(left , right) + 1; 
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        max_dia = 0;
        dfs(root);
        return max_dia;
    }
};

