/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (root == nullptr) {
            return root; 
        }
        queue<Node*>q; 
        q.push(root); 
        q.push(nullptr); 
        while (q.size()>1) {
            Node*r = q.front(); q.pop(); 
            r->next = q.front(); 
            if (r->left != nullptr) {
                q.push(r->left); 
            }
            if (r->right != nullptr) {
                q.push(r->right); 
            }
            if (q.front() == nullptr) {
                q.pop(); 
                q.push(nullptr);
            }
        }
        return root; 
    }
};
