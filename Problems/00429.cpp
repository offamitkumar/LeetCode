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
    vector<vector<int>>traversal; 
public:
    vector<vector<int>> levelOrder(Node* root) {
        traversal.clear(); 
        Node* dummy = new Node(INT_MIN); 
        queue<Node*>q; 
        if(root != nullptr) 
            q.push(root); 
        q.push(dummy); 
        while (q.size()>1) {
            vector<int>v; 
            while(q.front()->val != INT_MIN) {
                v.push_back(q.front()->val); 
                for(auto&itr:q.front()->children) {
                    q.push(itr);
                }
                q.pop(); 
            }
            q.pop(); 
            q.push(dummy); 
            traversal.push_back(v);
        }
        return traversal; 
    }
};
