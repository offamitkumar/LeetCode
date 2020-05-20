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
    int ans =-1;
    bool isAnsFound = false;
    int tempCounter = 0;
    void getans(TreeNode* root , int k){
        if(isAnsFound){
            return;
        }
        if(root->left!=nullptr){
            getans(root->left , k);
        }
        tempCounter++;
        if(k==tempCounter){
            isAnsFound = true;
            ans = root -> val;
            tempCounter++;
            return;
        }
        if(!isAnsFound && root->right != nullptr){
            getans(root->right , k);
        }
        if(k==tempCounter){
            isAnsFound = true;
            ans = root -> val;
            return;
        }
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        tempCounter =0;
        isAnsFound = false;
        getans(root , k);
        return ans;
    }
};
