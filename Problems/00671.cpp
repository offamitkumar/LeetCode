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
    long secondMinNumber = numeric_limits<long>::max();
    long firstMinNumber = numeric_limits<long>::max();
    void getSecondMinNode(TreeNode*root){
        if(root==nullptr){
            return;
        }
        if(root->left!=nullptr){
            getSecondMinNode(root->left);
        }
        if(root->right!=nullptr){
            getSecondMinNode(root->right);
        }
        if(root->val<firstMinNumber){
            secondMinNumber = firstMinNumber;
            firstMinNumber = root->val;
        }else if(root->val != firstMinNumber){
            secondMinNumber = min(secondMinNumber , static_cast<long>(root->val));
        }
    }
public:
    int findSecondMinimumValue(TreeNode* root) {
        getSecondMinNode(root); 
        if(secondMinNumber==numeric_limits<long>::max()){
            return -1;
        }else{
            return static_cast<int>(secondMinNumber);
        }
    }
};
