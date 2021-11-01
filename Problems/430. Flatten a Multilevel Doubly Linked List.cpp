/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
    Node*last = nullptr;
    Node*current = nullptr; 
    void flat(Node*head) {
        while (head != nullptr) {
            current->next = new Node(); 
            last = current; 
            current = current->next; 
            current->prev = last; 
            current->val = head->val; 
            if (head->child != nullptr) {
                flat(head->child); 
            }
            head = head->next;
        }
    }
public:
    Node* flatten(Node* head) {
        Node*res =nullptr; 
        while (head != nullptr) {
            if (res == nullptr) {
                res = new Node(); 
                current = res; 
                current->prev = last; 
                res -> val = head->val; 
            } else {
                current->next = new Node(); 
                last = current; 
                current = current->next; 
                current->prev = last; 
                current->val = head->val; 
            }
            if (head->child != nullptr) {
                flat(head->child); 
            }
            head = head->next; 
        }
        return res; 
    }
};
