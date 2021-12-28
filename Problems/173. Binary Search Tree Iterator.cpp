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
class BSTIterator {
    stack<TreeNode*>st; 
public:
    BSTIterator(TreeNode* root) {
        st.push(root); 
    }
    
    int next() {
        TreeNode*t = st.top(); st.pop(); 
        while (t->right != nullptr || t->left != nullptr) {
            if (t->left == nullptr) {
                if (t->right != nullptr) {
                    st.push(t->right); 
                }
                break;
            } else {
                if (t->right != nullptr) {
                    st.push(t->right); 
                }
                st.push(t); 
                st.push(t->left); 
                t->left = nullptr; 
                t->right = nullptr; 
            }
            t = st.top(); st.pop(); 
        }
        return t->val; 
    }
    
    bool hasNext() {
        return !(st.empty()); 
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
