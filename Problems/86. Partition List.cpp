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
    ListNode* partition(ListNode* head, int x) {
        ListNode*bg=nullptr, *sm=nullptr; 
        ListNode*ebg = nullptr, *esm = nullptr; 
        while (head != nullptr) {
            if (head -> val < x) {
                if ( sm == nullptr) {
                    sm = new ListNode(head->val); 
                    esm = sm;
                } else {
                    esm->next = new ListNode(head->val);
                    esm = esm->next; 
                }
            } else {
                if (bg == nullptr) {
                    bg = new ListNode(head->val); 
                    ebg = bg; 
                } else {
                    ebg -> next = new ListNode(head->val);
                    ebg = ebg->next; 
                }
            }
            head = head->next; 
        }
        if (sm == nullptr) {
            return bg; 
        } else {
            esm->next = bg; 
        }
        return sm; 
    }
};
