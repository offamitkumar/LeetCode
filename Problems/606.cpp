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
    string res;
    void dfs(TreeNode* root) {
        if(root->left == nullptr and root->right == nullptr){
            return; 
        }
        if (root->left) {
            res+='(';
            res+=to_string(root->left->val);
            dfs(root->left);
            res+=')';
        }
        if (root->right) {
            if(root->left == nullptr) {
                res+="()";
            }
            res+='(';
            res+=to_string(root->right->val);
            dfs(root->right);
            res+=')';
        }
    }
public:
    string tree2str(TreeNode* root) {
        res = "";
        res += to_string(root->val);
        dfs(root);
        return res;
    }
};
