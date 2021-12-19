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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) {
            TreeNode*temp = new TreeNode(val); 
            temp->left = root; 
            return temp; 
        }
        queue<TreeNode*>q; q.push(root); 
        for (int i=1; i<depth-1; ++i){
            const int&n = q.size(); 
            for (int i=0; i<n; ++i) {
                TreeNode*temp = q.front(); q.pop(); 
                if (temp -> right) {
                    q.push(temp->right); 
                }
                if (temp -> left) {
                    q.push(temp->left); 
                }
            }
        }
        while (!q.empty()) {
            TreeNode*temp = q.front(); q.pop(); 
            {
                TreeNode*t = new TreeNode(val); 
                t->right = temp->right; 
                temp->right = t; 
            }
            {
                TreeNode*t = new TreeNode(val); 
                t->left = temp->left; 
                temp->left = t; 
            }
        }
        return root; 
    }
};
