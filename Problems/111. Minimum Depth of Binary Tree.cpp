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
    int dfs(TreeNode* root , int dept) {
        if(root ==nullptr) return 1000000; 
        if (root->left == nullptr && root->right == nullptr) return dept+1; 
        return min(dfs(root->left ,dept+1) , dfs(root->right,dept+1)); 
    }
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0; 
        if (root->left == nullptr && root->right == nullptr) return 1; 
        return min(dfs(root->left ,1) , dfs(root->right,1)); 
    }
};

