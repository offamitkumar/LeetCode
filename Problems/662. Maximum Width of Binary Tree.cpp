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
    int widthOfBinaryTree(TreeNode* root) {
        int ans{}; 
        if (root == nullptr) {
            return ans; 
        }
        queue<pair<int,TreeNode*>>q; 
        q.push({0,root}); 
        while (!q.empty()) {
            int left = q.front().first; 
            int right = INT_MIN;
            int n = q.size(); 
            for (int i=0; i<n; ++i) {
                auto node = q.front(); q.pop(); 
                right = max(right, node.first); 
                if (node.second->left) {
                    q.push({(int64_t)2 * node.first + 1 , node.second -> left}); 
                }
                if (node.second->right) {
                    q.push({(int64_t)2 * node.first + 2 , node.second -> right}); 
                }
            }
            ans = max(ans , right - left + 1); 
        }
        return ans; 
    }
};
