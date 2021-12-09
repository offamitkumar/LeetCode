/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
    string pre_order; 
    queue<string>q; 
    int index, len; 
    string getData(const string&data) {
        string res; 
        while (index<len and data[index] != '/') {
            res += data[index]; 
            index++; 
        }
        index++; 
        return res; 
    }
    TreeNode* buildTree(const string& data) {
        string s = getData(data);
        if (s =="X") {
            return nullptr; 
        }
        TreeNode*node = new TreeNode(atoi(s.c_str())); 
        node -> left = buildTree(data); 
        node -> right = buildTree(data); 
        return node; 
    }
    void preOrder(TreeNode* root) {
        if (root == nullptr) {
            pre_order += "X/"; 
            return ;
        }
        pre_order += to_string(root->val) + "/"; 
        preOrder(root->left); 
        preOrder(root->right); 
    }
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        pre_order = ""; 
        preOrder(root); 
        return pre_order; 
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        index = 0; 
        len = data.length(); 
        return buildTree(data); 
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
