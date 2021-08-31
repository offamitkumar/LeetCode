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
    string ans="";
    void dfs(TreeNode*root , string a) {
        if (root==nullptr)return;
        if (root->left == nullptr && root->right == nullptr) {
            a+=char(root->val+'a');
            reverse(a.begin(),a.end());
            if (ans.size()==0) {
                ans = a; 
            } else {
                if (!lexicographical_compare(ans.begin() , ans.end() , a.begin(), a.end())) {
                    ans = a; 
                }
            }
            return ;
        }
        a+=char(root->val+'a');
        dfs(root->left , a);
        dfs(root->right, a);
    }
public:
    string smallestFromLeaf(TreeNode* root) {
        if (root==nullptr) 
            return ans; 
        string res="";
        dfs(root ,res);
        return ans;
    }
};
