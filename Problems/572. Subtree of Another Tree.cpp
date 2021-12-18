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
    bool isSub;
    bool check(TreeNode*root , TreeNode*subRoot) {
        if (root == nullptr && subRoot == nullptr) return true; 
        if (root == nullptr || subRoot == nullptr) return false; 
        if (root -> val != subRoot -> val ) {
            return false; 
        }
        return check(root->right , subRoot->right) && check(root->left , subRoot->left); 
    }
    void dfs(TreeNode*root , TreeNode*subRoot) {
        if (root == nullptr || isSub) return; 
        if (root -> val == subRoot -> val) {
            if(check(root, subRoot)){
                isSub = true; 
            }
        }
        dfs(root->right, subRoot); 
        dfs(root->left , subRoot); 
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        isSub = false; 
        dfs(root, subRoot); 
        return isSub; 
    }
};
