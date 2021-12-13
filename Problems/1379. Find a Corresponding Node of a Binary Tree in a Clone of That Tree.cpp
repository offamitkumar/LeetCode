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
    TreeNode* temp; 
    bool found; 
    void dfs(TreeNode*original, TreeNode*cloned, TreeNode*target) {
        if (original == nullptr || found) return ;
        if (original == target) {
            found = true; 
            temp = cloned; 
            return ;
        }
        if (!found)
            dfs(original->right , cloned->right, target); 
        if (!found)
            dfs(original->left, cloned->left , target); 
        return ;
    }
public:
    Solution() {
        ios_base::sync_with_stdio(false); 
        cin.tie(nullptr); 
        cout.tie(nullptr); 
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        found = false; 
        dfs (original , cloned, target); 
        return temp; 
    }
};
