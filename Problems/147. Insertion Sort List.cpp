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
    ListNode* insertionSortList(ListNode* head) {
        if (head == nullptr) {
            return head; 
        }
        ListNode*dummy = new ListNode(0); 
        ListNode*prev = dummy; 
        ListNode*next = nullptr; 
        ListNode*current = head; 
        while (current) {
            next = current->next; 
            while (prev->next != nullptr && prev->next->val < current->val) {
                prev = prev->next; 
            }
            current->next = prev->next; 
            prev->next = current; 
            prev = dummy; 
            current = next; 
        }
        return dummy->next; 
    }
};
