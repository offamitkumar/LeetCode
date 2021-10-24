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
        int countNodes(TreeNode* root) {
            if (root == nullptr) {
                return 0; 
            }
            int left{}; 
            TreeNode*temp = root; 
            while (temp->left != nullptr) {
                left++; 
                temp = temp->left; 
            }
            int right{}; 
            temp = root; 
            while (temp->right !=nullptr) {
                right++; 
                temp = temp->right;
            }
            if (left == right) {
                return (1<<(left+1)) - 1; 
            } else {
                return 1 + countNodes(root->left) + countNodes(root->right);
            }
        }
};

