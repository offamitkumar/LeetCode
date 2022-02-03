/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    map<TreeNode*, TreeNode*>par; 
    void dfs(TreeNode* root) {
        if (root == nullptr) {
            return; 
        }
        if (root -> left) {
            par[root->left] = root; 
            dfs(root->left); 
        }
        if (root -> right) {
            par[root->right] = root; 
            dfs(root->right); 
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        par.clear(); 
        dfs(root); 
        unordered_set<int>visited; 
        queue<TreeNode*>q; 
        q.push(target); 
        vector<int>res; 
        visited.insert(target->val); 
        for (int j=0; j<k; ++j) {
            int n = q.size(); 
            for (int i=0; i<n; ++i) {
                TreeNode*current = q.front(); q.pop(); 
                if (current->left &&  visited.find(current->left->val) == visited.end()) {
                    q.push(current->left); 
                    visited.insert(current->left->val); 
                }
                if (current->right &&  visited.find(current->right->val) == visited.end()) {
                    q.push(current->right); 
                    visited.insert(current->right->val); 
                }
                if (par.count(current) && visited.find(par[current]->val) == visited.end()) {
                    q.push(par[current]); 
                    visited.insert(par[current]->val); 
                }
            }
        }
        while (!q.empty()) {
            res.push_back(q.front()->val); 
            q.pop(); 
        }
        return res; 
    }
};
