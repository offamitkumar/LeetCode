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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = new ListNode();
        temp -> next = head; 
        ListNode *first = temp , *second = temp;
        while((n--)+1){
            first = first->next;
        }
        while(first){
            first = first -> next;
            second = second -> next;
        }
        second ->next = second ->next ->next;
        return temp->next;
    }
};
