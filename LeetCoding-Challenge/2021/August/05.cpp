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
private:
    void dfs(TreeNode *root , int currentSum , int targetSum , vector<int>&path , vector<vector<int>>&res) {
        path.push_back(root->val); 
        currentSum+=root->val; 
        if (root -> left == nullptr and root->right == nullptr) {
            if (targetSum == currentSum ) {
                res.push_back(path); 
            }
            path.pop_back(); 
            currentSum -= root->val; 
            return ;
        }
        if (root -> left != nullptr) {
            dfs(root->left, currentSum, targetSum, path, res); 
        }
        if (root -> right != nullptr) {
            dfs(root->right, currentSum, targetSum, path, res); 
        }
        path.pop_back(); 
        currentSum -= root->val; 
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>res; 
        int currentSum{}; 
        if (root != nullptr) {
            vector<int>path; 
            dfs(root, currentSum, targetSum, path, res); 
        }
        return res; 
    }
};
