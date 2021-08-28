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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* kthNode=head , *kthNodeFromLast=head , *current = head; 
        int i=0;
        while(current != nullptr) {
            current=current->next; 
            ++i;
            if ( i>k) {
                kthNodeFromLast  = kthNodeFromLast->next;
            }
            if (i<k) {
                kthNode = kthNode->next;
            }
        }
        swap(kthNode->val , kthNodeFromLast->val);
        return head; 
    }
};
