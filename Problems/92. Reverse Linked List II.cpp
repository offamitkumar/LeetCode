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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy = new ListNode(-1 , head); 
        ListNode *leftP = dummy , *cur = head; 
        for (int i=0; i<left-1; ++i) {
            leftP = leftP -> next; 
            cur = cur -> next; 
        }
        ListNode* prev= nullptr; 
        for (int i=0; i<right - left +1; ++i) {
            ListNode*temp = cur->next; 
            cur -> next = prev; 
            prev = cur; 
            cur = temp; 
        }
        leftP->next->next = cur; 
        leftP->next = prev; 
        return dummy->next; 
    }
};
