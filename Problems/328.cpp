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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr){
            return head;
        }
        ListNode* even , *temp;
        ListNode* odd = head;
        ListNode* even_s; // point the starting of even list 
        if(head -> next != nullptr){
            even_s = head ->next;
            even = head -> next;
        }else{
            return head;
        }
        if( even ->next != nullptr ){
            temp = even -> next;
        }else{
            return head;
        }
        int counter = 1;
        while( temp != nullptr ){
            // swap with odd
            ListNode*Temp;
            ListNode*lastSeen= temp->next;
            if(counter&1){
                ++counter;
                odd -> next = temp;
                even -> next = temp->next;
                odd = odd->next;
                odd->next = even_s;
                even = even ->next;
            }else{
                ++counter;
            }
            temp = lastSeen;
        }
        return head;
    }
};
