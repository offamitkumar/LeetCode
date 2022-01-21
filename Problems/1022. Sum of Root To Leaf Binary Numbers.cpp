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
    int sum{};
    void dfs(TreeNode* root, int current=0) {
        if (root == nullptr) {
            return; 
        }
        current<<=1;
        if (root -> val) {
            current|=1; 
        }
        if (root->left == nullptr &&  root->right == nullptr) {
            sum+=current; 
            return ; 
        }
        if (root->left) {
            dfs(root->left, current); 
        }
        if (root->right) {
            dfs(root->right, current); 
        }
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        if (root == nullptr) {
            return 0; 
        }
        dfs(root); 
        return sum; 
    }
};
