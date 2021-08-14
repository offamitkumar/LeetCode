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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*dummy = new ListNode(INT_MIN , head); 
        ListNode*prev = dummy; 
        while (head != nullptr) {
            if (head->next != nullptr and head->next->val == head->val) {
                while (head->next != nullptr and head->next->val == head->val){
                    head= head->next;
                }
                prev->next = head->next;
            } else {
                prev = prev->next;
            }
            head=head->next;
        }
        return dummy->next;
    }
};
