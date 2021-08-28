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
    int deepest_height;
    void getDeepestHeight(TreeNode* root, int current_height) {
        if (root == nullptr) {
            return ;
        }
        if (deepest_height < current_height) {
            deepest_height = current_height;
        }
        getDeepestHeight(root -> right, current_height+1);
        getDeepestHeight(root -> left, current_height+1);
    }
public:
    int maxDepth(TreeNode* root) {
        deepest_height=0;
        getDeepestHeight(root, 1);
        return deepest_height;
    }
};
