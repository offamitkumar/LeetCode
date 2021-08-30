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
    int maxSum{};
    int dfs(TreeNode* root) {
        if (root==nullptr) {
            return 0;
        }
        int leftSum = dfs(root->left); 
        int rightSum = dfs(root->right); 
        // this could be path -> left -> root-> right 
        maxSum = max({maxSum ,root->val+leftSum , root->val+rightSum, root->val + leftSum + rightSum ,root->val}); 
        // lets move upwards with max of left or right 
        return max({root->val+leftSum , root->val+rightSum ,root->val}); 
    }
public:
    int maxPathSum(TreeNode* root) {
        if (root==nullptr) {
            return 0; 
        } else {
            maxSum = root->val; 
        }
        return max(maxSum , dfs(root));
    }
};
