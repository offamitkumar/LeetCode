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
    ListNode* split(ListNode*head) {
        ListNode*slow=head; 
        ListNode*pre=head; 
        ListNode*fast = head; 
        while (fast) {
            pre = slow; 
            slow=slow->next; 
            fast = fast->next; 
            if (fast) {
                fast = fast->next; 
            }
        }
        if (pre != nullptr) 
            pre->next = nullptr; 
        return slow; 
    }
    ListNode* merge(ListNode*head1, ListNode*head2) {
        ListNode d; 
        ListNode*temp = &d; 
        while (head1 and head2) {
            if (head1->val < head2->val) {
                temp->next = head1; 
                head1 = head1->next; 
            }  else {
                temp->next = head2; 
                head2 = head2->next; 
            }
            temp = temp->next; 
            temp->next= nullptr;
        }
        if (head1) {
            temp->next =head1; 
        }
        if (head2) {
            temp->next = head2; 
        }
        return d.next; 
    }
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr or head->next == nullptr) 
            return head; 
        ListNode*mid = split(head); 
        ListNode*head1 = sortList(head); 
        ListNode*head2 = sortList(mid); 
        return merge(head1, head2); 
    }
};
