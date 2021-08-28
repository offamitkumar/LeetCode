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
    map<int, int>dic; 
    int counter;
    void dfs(TreeNode *root , int currentSum , int targetSum) {
        if (root==nullptr)
            return ; 
        currentSum+= root->val; 
        counter += dic[currentSum - targetSum]; 
        dic[currentSum]++; 
        dfs(root->left , currentSum , targetSum); 
        dfs(root->right , currentSum , targetSum);
        dic[currentSum]--;
    }
public:
    int pathSum(TreeNode* root, int targetSum ) {
        counter = 0; 
        dic[0] = 1;
        dfs(root , 0 , targetSum); 
        return counter;
    }
};
