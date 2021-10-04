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
    pair<int,int> dfs(TreeNode* root) {
        if (root == nullptr) {
            return {0,0};
        }
        pair<int,int> a= dfs(root->right), b = dfs(root->left) , c; 
        // first = take , second = left
        int current = max( a.second + b.second + root->val , a.first + b.first); 
        c.second = max(a.second + b.second , a.first + b.first); 
        c.first = current; 
        return c;
    }
public:
    int rob(TreeNode* root) {
        pair<int,int> a = dfs(root);
        return max(a.first , a.second); 
    }
};
