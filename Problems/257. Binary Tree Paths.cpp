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
    vector<string>res; 
    void dfs(TreeNode*root,const string &s) {
        if (root==nullptr) {
            return ; 
        }
        const string &r = to_string(root->val); 
        if (root->left == nullptr && root->right == nullptr) {
            res.push_back(s+r); 
        } else {
            if (root->left != nullptr) {
                dfs(root->left, s+r+"->"); 
            }
            if (root->right != nullptr) {
                dfs(root->right, s+r+"->"); 
            }
        }
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root,""); 
        return res; 
    }
};
