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
    ListNode*reverse(ListNode*head) {
        ListNode*prev = nullptr; 
        while (head) {
            ListNode*temp = head->next; 
            head ->next = prev; 
            prev = head; 
            head = temp; 
        }
        return prev; 
    }
    void merge(ListNode*rev, ListNode*slow) {
        while (rev and slow) {
            ListNode*temp = slow->next;
            slow->next = rev; 
            rev=rev->next; 
            slow->next->next = temp; 
            slow = slow->next->next; 
        }
    }
public:
    void reorderList(ListNode* head) {
        if (head->next == nullptr) return ; 
        ListNode*slow=head, *fast=head->next; 
        while (fast && fast->next) {
            fast=fast->next; 
            if (fast) {
                fast = fast->next; 
            } else break; 
            slow = slow->next; 
        }
        fast = slow->next; 
        slow->next = nullptr; 
        slow = head; 
        merge(reverse(fast), slow); 
    }
};
