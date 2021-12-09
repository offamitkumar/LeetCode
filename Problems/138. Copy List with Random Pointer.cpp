/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node*newHead = nullptr, *current =nullptr; 
        for (Node*temp = head; temp != nullptr;) {
            current = new Node(temp->val); 
            if (nullptr == newHead) {
                newHead= current; 
            }
            current->next = temp->next; 
            temp->next = current;
            temp = current->next; 
        }
        current = newHead; 
        for (Node*temp = head; temp !=  nullptr;) {
            if (temp->random != nullptr) {
                current->random = temp->random->next; 
            }
            if (current->next != nullptr)
                current= current->next->next; 
            if (temp->next == nullptr){
                break; 
            }
            temp = temp->next->next; 
        }
        current = newHead; 
        for (Node*temp = head; temp != nullptr;) {
            Node*helper = current->next; 
            if (current->next != nullptr)
                current->next = current->next->next; 
            temp->next = helper; 
            current = current->next; 
            temp = temp->next; 
        }
        return newHead; 
    }
};
