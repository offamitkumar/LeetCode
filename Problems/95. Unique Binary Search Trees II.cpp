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
    vector<TreeNode*> dfs(int start , int finish) {
        vector<TreeNode*>v; 
        if (start > finish) {
            v.push_back(NULL);
            return v;
        }
        for(int i=start; i<=finish; ++i) {
            vector<TreeNode*> left= dfs(start , i-1);
            vector<TreeNode*> right = dfs(i+1 , finish); 
            for(auto* l:left) {
                for (auto* r:right) {
                    TreeNode*root = new TreeNode(i); 
                    root->left = l; 
                    root->right = r; 
                    v.push_back(root);
                }
            }
        }
        return v;
    }
public:
    vector<TreeNode*> generateTrees(int n) {
        if (n==0) {
            return vector<TreeNode*>();
        }
        return dfs(1 , n); 
    }
};
