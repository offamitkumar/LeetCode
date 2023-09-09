//
// Created by Amit Kumar on 09/09/23.
//

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *insertGreatestCommonDivisors(ListNode *head) {
        ListNode* temp = head;
        while (temp->next != nullptr) {
            ListNode *newNode = new ListNode(__gcd(temp->val, temp->next->val), temp->next);
            temp->next = newNode;
            temp = temp->next->next;
        }
        return head;
    }
};