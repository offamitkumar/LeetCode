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
    int goodNodes(TreeNode* root , int maxSeen=numeric_limits<int>::min()) {
        if (root == nullptr)
            return 0;
        int counter{}; 
        if (root -> val >= maxSeen) {
            ++counter;
            maxSeen = root->val;
        }
        counter+= goodNodes(root->left , maxSeen); 
        counter+=goodNodes(root->right , maxSeen); 
        return counter; 
    }
};
