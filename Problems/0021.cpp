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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        while(l1 != nullptr && l2 != nullptr){
            if((l1->val) < (l2->val)){
                if(head == nullptr){
                    head = l1;
                    tail = l1;
                }else{
                    tail->next = l1;
                    tail = tail->next;
                }
                l1 = l1 ->next;
            }else{
                if(head == nullptr){
                    head = l2;
                    tail = l2;
                }else{
                    tail->next = l2;
                    tail = tail->next;
                }
                l2 = l2 ->next;
            }
        }
        while(l1!=nullptr){
            if(head == nullptr){
                head = l1;
                tail = l1;
            }else{
                tail->next = l1;
                tail = tail->next;
            }
            l1=l1->next;
        }

        while(l2!=nullptr){
            if(head == nullptr){
                head = l2;
                tail = l2;
            }else{
                tail->next = l2;
                tail = tail->next;
            }
            l2 = l2 ->next;
        }
        return head;
    }
};
