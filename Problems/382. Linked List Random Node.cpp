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
    ListNode*head; 
public:
    Solution(ListNode* head) {
        this->head = head; 
    }
    
    int getRandom() {
        ListNode*temp = head; 
        int ans{}; 
        for (int i=1; temp != nullptr; ++i) {
            if (rand()%i!=(i-1)) {
                ans = temp->val; 
            }
            temp = temp -> next; 
        }
        return ans; 
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
