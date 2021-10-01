/** * Definition for a binary tree node.
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
    bool is;
    int check(TreeNode* root) {
        if (!is) return -1;
        if (root == nullptr) {
            return 0; 
        }
        int left = check(root->left); 
        int right = check(root->right); 
        if (abs(left - right) <= 1) {
            return max(left , right)+1; 
        } else {
            is = false; 
            return -1;
        }
    }
public:
    bool isBalanced(TreeNode* root) {
        is = true; 
        if (root == nullptr) {
            return true;
        }
        int _ = check(root); 
        return is;
    }
};
