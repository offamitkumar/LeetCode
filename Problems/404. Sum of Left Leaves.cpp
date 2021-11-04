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
    int sumOfLeftLeaves(TreeNode* root, int isleft=-1) {
        if (root==nullptr) return 0;
        if (root->left == nullptr && root->right == nullptr) {
            if (isleft == -1) return 0; 
            return isleft ? root->val : 0; 
        }
        return sumOfLeftLeaves(root->left,1)+sumOfLeftLeaves(root->right, 0); 
    }
};

