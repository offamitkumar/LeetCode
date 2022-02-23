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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*h=nullptr, *e=nullptr; 
        head = head->next; 
        while (head != nullptr) {
            if (h == nullptr) {
                h = new ListNode(0); 
                e = h; 
            } else {
                e->next = new ListNode(0); 
                e = e->next; 
            }
            int sum{}; 
            while (head->val != 0) {
                sum+=head->val; 
                head = head->next; 
            }
            e->val = sum; 
            head = head->next; 
        }
        return h; 
    }
};
