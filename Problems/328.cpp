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
        if(head == nullptr || head -> next == nullptr || head -> next -> next == nullptr){
            return head;
        }
        ListNode* even = head -> next , *n_even = head -> next , *odd = head; 
        while (even != nullptr && even->next != nullptr) {
            odd -> next = even->next; 
            odd = odd -> next; 
            even -> next = odd -> next; 
            even = even -> next; 
        }
        odd -> next = n_even; 
        return head;
    }
};
