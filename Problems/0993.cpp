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
    bool found = false;
    pair<int,int> get(TreeNode*root , int toFind , int depth , int parent){
        if(root == nullptr){
            return make_pair(-1,-1);
        }
        pair<int,int>left{-1,-1} , right{-1,-1};
        if(root->left != nullptr){
            if(root->left->val == toFind){
                return make_pair(root->val , depth+1);
            }else{
                left = get(root->left , toFind , depth+1 , root->val);
            }
        }
        if(root->right != nullptr){
            if(root->right->val == toFind){
                return make_pair(root->val , depth+1);
            }else{
                right = get(root->right , toFind , depth+1 , root->val);
            }
        }
        if(left.first!=-1 && left.second !=-1){
            return left;
        }else{
            return right;
        }
            
    }
public:
    bool isCousins(TreeNode* root, int x, int y) {
        pair<int,int>node1 = get(root , x , 0, -1);
        pair<int,int>node2 = get(root , y , 0, -1);
        return ((node1.first!=node2.first)&&(node1.second==node2.second));
    }
};
