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
    int getDecimalValue(ListNode* head) {
        int res{}; 
        while (head != nullptr) {
            res <<= 1; 
            res += head -> val; 
            head = head -> next; 
        }
        return res; 
    }
};
