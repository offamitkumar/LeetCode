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
    int len(ListNode* head) {
        ListNode*temp = head; 
        int counter{};
        while (temp != nullptr) {
            ++counter; 
            temp = temp->next; 
        }
        return counter;
    }
    ListNode* next(ListNode*head) {
        if (head != nullptr) {
            return head->next;
        }
        return nullptr;
    }
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k); 
        int length = len(head);
        int extra = (length%k); 
        int partSize = length / k; 
        for (int i=0; i<k; ++i) {
            ans[i] = head; 
            int temp = partSize;
            if ( length > k) {
                while (--temp>0) {
                    head = next(head);
                }
                if (extra-->0) {
                    head = next(head);
                }
            }
            if (head != nullptr) {
                ListNode*t = head->next; 
                head->next = nullptr; 
                head=t;
            }
        }
        return ans;
    }
};
