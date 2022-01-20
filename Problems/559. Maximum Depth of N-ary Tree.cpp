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
    int ans{}; 
    void dfs(Node*root, int level) {
        ans = max(ans , level); 
        for (auto&itr:root->children) {
            dfs(itr, level+1);
        }
    }
public:
    int maxDepth(Node* root) {
        if (root == nullptr) return 0; 
        dfs(root,1); 
        return ans; 
    }
};
