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
    vector<int> rightSideView(TreeNode* root) {
        if (root == nullptr) return {}; 
        vector<int>ans; 
        queue<TreeNode*>q; 
        q.push(root); 
        while (!q.empty()) {
            const int &n = q.size(); 
            int previous; 
            for (int i=0; i<n; ++i) {
                previous = q.front()->val; 
                if (q.front()->left) {
                    q.push(q.front()->left); 
                }
                if (q.front()->right) {
                    q.push(q.front()->right); 
                }
                q.pop(); 
            }
            ans.push_back(previous); 
        }
        return ans; 
    }
};
