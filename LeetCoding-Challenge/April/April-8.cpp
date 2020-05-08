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
    ListNode* middleNode(ListNode* head) {
        ListNode*h = head;
        ListNode*t = head;
        while(h!=nullptr && t!=nullptr){
            if(h->next!=nullptr){
                h = h->next;
            }
            else{
                return t;
            }
            if(h->next !=nullptr){
                h = h->next;
                //return t->next;
            }else{
                return t->next;
            }
            t = t->next;
        }
        return t->next;
    }
};
