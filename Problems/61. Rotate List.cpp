/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    int getLen(ListNode*head) {
        ListNode*temp = head; 
        int len{}; 
        while (temp != nullptr) {
            ++len; 
            temp = temp -> next; 
        }
        return len; 
    }
    ListNode* getKthNode (ListNode*head , int k) {
        ListNode*temp = head, *temp1 = head; 
        while (k-->=0) {
            temp = temp -> next; 
        }
        while (temp != nullptr) {
            temp1 = temp1 -> next; 
            temp = temp -> next; 
        }
        return temp1; 
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int len = getLen(head); 
        if (len == 0) return head; 
        k%=len; 
        if (k == 0) {
            return head; 
        }
        ListNode *temp = head; 
        ListNode *k_node = getKthNode(head, k); 
        ListNode *n_k_node = k_node -> next; 
        k_node->next = nullptr; 
        ListNode *temp1 = n_k_node; 
        while (temp1->next != nullptr) {
            temp1 = temp1 ->next; 
        }
        temp1 -> next = head; 
        return n_k_node; 
    }
};
