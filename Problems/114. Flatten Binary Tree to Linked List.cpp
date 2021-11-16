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
    void flatten(TreeNode* root) {
        TreeNode*temp = root; 
        while (temp != nullptr) {
            if (temp->left != nullptr) {
                TreeNode*temp1 = temp->left; 
                while (temp1->right != nullptr) {
                    temp1=temp1->right; 
                }
                temp1->right = temp->right; 
                temp->right = temp->left; 
                temp->left=nullptr; 
            } else {
                temp = temp -> right; 
            }
        }
    }
};
