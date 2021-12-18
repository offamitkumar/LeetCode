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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q; 
        int last{}; 
        q.push(root); 
        bool odd = false, again = false; 
        while (!q.empty()) {
            int n = q.size(); 
            again = false;
            for (int i=0; i<n; ++i) {
                if (again) {
                    if (odd) {
                        if (last >= q.front()->val) {
                            return false;
                        }
                    } else {
                        if (last <= q.front()->val) {
                            return false; 
                        }
                    }
                }
                again|=1; 
                last = q.front()->val;
                if (odd && (last%2==1)) {
                    return false; 
                } else if ((odd == false) && (last%2==0)){
                    return false; 
                }
                TreeNode*temp = q.front(); q.pop(); 
                if (temp->right) {
                    q.push(temp->right);
                }
                if (temp->left) {
                    q.push(temp->left); 
                }
            }
            odd = (!odd); 
        }
        return true;
    }
};
