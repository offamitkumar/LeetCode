/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    map<int,Node*>nodes; 
    Node* dfs(Node* node)  {
        Node*current_node = new Node(node->val); 
        nodes[node->val] = current_node; 
        for (auto&itr:node->neighbors) {
            const auto &temp = nodes.find(itr->val); 
            if (temp == nodes.end()) {
                current_node->neighbors.push_back(dfs(itr)); 
            } else {
                current_node->neighbors.push_back(temp->second); 
            }
            
        }
        return current_node; 
    }
public:
    Node* cloneGraph(Node* node) {
        if (node == nullptr) {
            return nullptr; 
        } else if(node->neighbors.size() == 0) {
            Node*temp = new Node(1); 
            return temp; 
        }
        return dfs(node); 
    }
};
