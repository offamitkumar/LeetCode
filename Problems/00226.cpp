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
    void reverse_tree(TreeNode*root){
        if (root == nullptr) {
            return ;
        }
        
        if (root -> left != nullptr && root -> right != nullptr) {
            TreeNode* temp  = root-> left;
            root -> left = root -> right;
            root -> right = temp;
            reverse_tree(root -> left);
            reverse_tree(root -> right);
        } else if ( root -> left != nullptr ) {
            TreeNode* temp = root -> left;
            root -> left = nullptr;
            root -> right = temp;
            reverse_tree(root -> right);
        } else if ( root -> right != nullptr ) {
            TreeNode* temp = root -> right;
            root -> right = nullptr;
            root -> left = temp;
            reverse_tree(root -> left);
        }
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        reverse_tree(root);
        return root;
    }
};
