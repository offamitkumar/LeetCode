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
    bool isLeft(TreeNode* root) {
        if (root->left == nullptr && root->right == nullptr) {
            return true; 
        }
        return false;
    }
    int sum; 
    void dfs(TreeNode*root , int num) {
        if(root==nullptr)
            return; 
        num*=10;
        num+=root->val; 
        if (isLeft(root)) {
            sum+=num; 
            return; 
        }
        dfs(root->left , num); 
        dfs(root->right , num); 
    }
public:
    int sumNumbers(TreeNode* root) {
        sum =0;
        dfs(root,0);
        return sum; 
    }
};
