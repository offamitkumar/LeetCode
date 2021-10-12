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
    TreeNode* prec(TreeNode* root, TreeNode* par) {
        while (root-> right != nullptr && root->right->val != par->val) {
            root = root->right;
        }
        return root; 
    }
public:
    void recoverTree(TreeNode* root) {
        TreeNode *prev = nullptr , *f = nullptr , *s = nullptr; 
        while (root != nullptr) {
            if (root -> left == nullptr) {
                if ( prev != nullptr and prev->val > root->val) {
                    if ( f == nullptr) {
                        f = prev; 
                    }
                    s = root; 
                }
                prev = root; 
                root = root -> right; 
            } else {
                TreeNode *temp = prec(root -> left , root); 
                if (temp->right == nullptr) {
                    temp->right = root; 
                    root = root-> left; 
                } else {
                    temp -> right = nullptr; 
                    if ( prev != nullptr and prev -> val > root -> val) {
                        if ( f== nullptr) 
                            f = prev;
                        s = root; 
                    }
                    prev = root; 
                    root = root -> right; 
                }
            }
        }
        swap(f->val , s->val); 
    }
};
