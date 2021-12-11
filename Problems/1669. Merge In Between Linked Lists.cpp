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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*temp = list1; 
        b-=a; 
        while(--a) {
            temp = temp->next; 
        }
        ListNode*next = temp->next; 
        temp->next = list2; 
        temp = next; 
        while (list2->next != nullptr) {
            list2 = list2->next; 
        }
        while (b--) {
            temp = temp->next; 
        }
        list2->next = temp->next; 
        return list1; 
    }
};
