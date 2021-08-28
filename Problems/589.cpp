/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    vector<int>v; 
    void dfs(Node*root) {
        if (root == nullptr) {
            return ;
        }
        v.push_back(root->val);
        for(auto&itr:root->children) {
            dfs(itr);
        }
        return ; 
    }
public:
    vector<int> preorder(Node* root) {
        v.clear(); 
        dfs(root); 
        return v; 
    }
};
