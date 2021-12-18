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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans; 
        if (root == nullptr) return ans; 
        queue<TreeNode*>q; 
        q.push(root); 
        while (!q.empty()) {
            int n = q.size(); 
            int x{INT_MIN}; 
            for (int i=0; i<n; ++i) {
                TreeNode*temp = q.front(); 
                q.pop(); 
                x = max(x , temp->val); 
                if (temp->right) {
                    q.push(temp->right);
                }
                if (temp->left) {
                    q.push(temp->left);
                }
            }
            ans.push_back(x); 
        }
        return ans; 
    }
};
