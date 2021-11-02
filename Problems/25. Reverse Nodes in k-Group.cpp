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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len{}; 
        ListNode*newHead = head; 
        while (newHead != nullptr) {
            ++len; newHead = newHead->next; 
        }
        ListNode*newTail = nullptr; 
        newHead = nullptr; 
        ListNode*tempTail = nullptr , *tempHead=nullptr; 
        ListNode*current = head, *prev = nullptr; 
        while (len>=k) {
            int t = k; 
            tempHead = nullptr; 
            tempTail = nullptr; 
            while(t--) {
                prev = current; 
                current = current->next; 
                prev->next = tempHead; 
                tempHead = prev; 
                if (tempTail == nullptr) {
                    tempTail = tempHead;  
                }
            }
            if (newHead == nullptr) {
                newHead = tempHead;
            } else {
                newTail->next = tempHead; 
            }
            newTail = tempTail;
            len-=k; 
        }
        newTail->next= current; 
        return newHead; 
    }
};

