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
    int sum, rightSum, total; 
    int helper( TreeNode* root) {
        if (root == nullptr) {
            return 0; 
        }
        int leftSum = helper(root->right); 
        rightSum= helper(root->left); 
        total = leftSum + rightSum + root->val; 
        root -> val = abs(leftSum - rightSum); 
        sum += root->val; 
        return total; 
    }
public:
    int findTilt(TreeNode* root) {
        sum=0; 
        total =0; 
        rightSum = 0; 
        int dummy = helper(root); 
        return sum; 
    }
};
