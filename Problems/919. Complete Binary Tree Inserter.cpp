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
class CBTInserter {
    TreeNode*root; 
public:
    CBTInserter(TreeNode* root) {
        this->root = root; 
    }
    
    int insert(int val) {
        queue<TreeNode*>q; 
        if (root == nullptr) {
            root = new TreeNode(val);
        } else {
            q.push(root); 
            while(true) {
                TreeNode*root = q.front(); q.pop(); 
                if (root->left != nullptr) {
                    q.push(root->left); 
                } else {
                    root->left = new TreeNode(val); 
                    return root -> val; 
                }
                if (root->right != nullptr) {
                    q.push(root->right); 
                } else {
                    root->right = new TreeNode(val); 
                    return root->val; 
                }
            }
        }
        return -1;
    }
    
    TreeNode* get_root() {
        return root; 
    }
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(val);
 * TreeNode* param_2 = obj->get_root();
 */
