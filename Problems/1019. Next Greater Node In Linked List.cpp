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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>res; 
        for (ListNode*temp = head; temp != nullptr; temp = temp->next) {
            res.push_back(temp->val); 
        }
        vector<int>ans(res.size()); 
        stack<int>s; 
        for (int i=res.size()-1; i>=0; --i) {
            while (!s.empty() && s.top() < res[i]) {
                s.pop(); 
            }
            if (!s.empty()) {
                ans[i]= s.top(); 
            } else {
                ans[i] = 0;
            }
            s.push(res[i]); 
        }
        return ans; 
    }
};
