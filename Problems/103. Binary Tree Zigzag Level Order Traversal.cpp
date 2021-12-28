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
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res; 
        deque<TreeNode*>d; 
        if (root != nullptr)
            d.push_back(root); 
        bool left=true; 
        while (!d.empty()) {
            vector<int>tmp; 
            int n = d.size(); 
            for (int i=0; i<n; ++i) {
                if (left) {
                    TreeNode* t = d.front(); d.pop_front(); 
                    tmp.push_back(t->val); 
                    if (t->left != nullptr) {
                        d.push_back(t->left); 
                    }
                    if (t->right != nullptr) {
                        d.push_back(t->right); 
                    }
                } else {
                    TreeNode* t = d.back(); d.pop_back(); 
                    tmp.push_back(t->val); 
                    if (t->right != nullptr) {
                        d.push_front(t->right); 
                    }
                    if (t->left != nullptr) {
                        d.push_front(t->left); 
                    }
                }
            }
            res.push_back(tmp); 
            left = (!left); 
        }
        return res; 
    }
};
