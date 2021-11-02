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
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head -> val == val) {
            head = head->next; 
        }
        ListNode*temp = head;
        while (temp != nullptr) {
            ListNode*node = temp->next; 
            while (node != nullptr && node->val ==val) {
                node = node->next; 
            }
            temp->next = node; 
            temp = temp->next; 
        }
        return head; 
    }
};

