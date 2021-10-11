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
    TreeNode* prece(TreeNode*root, TreeNode*par) {
        while (root->right != nullptr && root->right->val != par->val) {
            root = root->right;
        }
        return root;
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        while (root != nullptr) {
            if (root -> left == nullptr) {
                ans.push_back(root->val); 
                root = root->right; 
            } else {
                TreeNode *pre = prece(root->left , root); 
                if (pre->right == nullptr) {
                    pre->right = root; 
                    root = root->left; 
                } else {
                    ans.push_back(root->val);
                    pre->right = nullptr;
                    root = root -> right; 
                }
            }
        }
        return ans;
    }
};
