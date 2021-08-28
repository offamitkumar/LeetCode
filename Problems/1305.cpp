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
public:
    void trv(TreeNode* root,vector<int>&ans){
        if(root==NULL){return;}
        ans.push_back(root->val);
        if(root->left!=NULL){
            trv(root->left,ans);
        }
        if(root->right!=NULL){
            trv(root->right,ans);
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        trv(root1,ans);
        trv(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
