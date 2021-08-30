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
    int maxPath;
    bool isLeaf(TreeNode* root) {
        if (root->left == nullptr and root->right == nullptr) {
            return true; 
        }
        return false; 
    }
    pair<int,int> dfs(TreeNode*root) {
        if(isLeaf(root)) {
            return {0,root->val};
        }
        pair<int,int>retrn{0,root->val};
        pair<int,int>ret{0 , root->val}; 
        if (root->left) {
            auto leftPath = dfs(root->left); 
            maxPath = max(maxPath , leftPath.first);
            if (root->val == leftPath.second) {
                ret.first = ret.first+leftPath.first+1;
                retrn.first=ret.first;
            }
        }
        if (root->right) {
            auto rightPath = dfs(root->right); 
            maxPath = max(maxPath , rightPath.first);
            if (root->val == rightPath.second) {
                ret.first = ret.first+rightPath.first+1;
                if(rightPath.first >= retrn.first) {
                    retrn.first = rightPath.first+1;
                }
            }
        }
        maxPath = max(maxPath , ret.first); 
        return retrn;
    }
public:
    int longestUnivaluePath(TreeNode* root) {
        maxPath =0;
        if (root==nullptr) {
            return maxPath;
        }
        pair<int,int>p = dfs(root);
        return max(maxPath , p.first);
    }
};
