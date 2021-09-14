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
    set<int>s; 
    vector<TreeNode*>ans;
    void dfs(TreeNode* root , bool add ) {
        if (root == nullptr) { 
            return ;
        }
        if (s.find(root->val) != s.end()) { // for root
            dfs(root->left , true); 
            dfs(root->right, true); 
            root -> left = nullptr; 
            root -> right = nullptr; 
        } else {
            if (add) {
                ans.push_back(root); 
                add = false;
            }
            if (root->left != nullptr) {
                if (s.find(root->left->val) != s.end()) {
                    dfs(root->left , true); 
                    root->left = nullptr;
                }
                dfs(root->left, false);
            }
            if (root->right != nullptr) {
                if (s.find(root->right->val) != s.end()) {
                    dfs(root->right , true); 
                    root->right = nullptr;
                }
                dfs(root->right, false);
            }
        }

    }
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        ans.clear();
        for (auto&itr:to_delete) {
            s.insert(itr);
        }
        dfs(root , true);
        return ans;
    }
};
