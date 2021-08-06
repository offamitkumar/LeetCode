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
    int dfs(TreeNode* root , int currentSum , int targetSum) {
        if (root == nullptr) {
            return 0; 
        }
        currentSum+=root->val; 
        int res{};
        if (targetSum == currentSum) {
            res++; 
        }
        if (root -> right != nullptr ) {
            res+= dfs(root->right , currentSum , targetSum); 
        }
        if (root -> left != nullptr ) {
            res += dfs(root->left , currentSum , targetSum); 
        }
        return res; 
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return 0;
        }
        return pathSum(root->left , targetSum) + dfs(root , 0 , targetSum) + pathSum(root->right , targetSum); 
    }
};
;
