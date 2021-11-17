/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len_a{}, len_b{}; 
        ListNode*temp = headA; 
        while (temp != nullptr) {
            len_a++; 
            temp = temp->next; 
        }
        temp = headB; 
        while (temp != nullptr) {
            len_b++; 
            temp = temp->next; 
        }
        temp = headA; 
        ListNode*tempB = headB; 
        if (len_a > len_b) {
            while (len_a != len_b) {
                temp = temp->next; 
                len_a--; 
            }
        } else if (len_a < len_b) {
            while (len_a != len_b) {
                tempB = tempB->next; 
                len_b--; 
            }
        }
        while (temp && tempB && temp!=tempB) {
            temp = temp->next; 
            tempB = tempB->next;
        }
        return temp; 
    }
};
