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
    void print(ListNode*root) {
        ListNode*temp = root; 
        while (temp != nullptr) {
            cout << temp -> val << ' ';
            temp = temp -> next;
        }
        cout << endl;
    }
    ListNode* insert(ListNode*root, ListNode*node) {
        ListNode*temp = root; 
        if (temp -> val  >= node -> val) {
            temp = new ListNode(node->val); 
            temp->next = root;
          //  print(temp);
            return temp;
        }
        while (temp -> next != nullptr && temp ->next -> val <= node -> val) {
            temp = temp -> next;
        }
        if (temp -> next == nullptr) {
            ListNode*t = new ListNode(node->val); 
            temp -> next = t; 
        } else {
            ListNode* t = new ListNode(node -> val) ;
            t -> next = temp -> next; 
            temp -> next = t; 
        }
       // print(root);
        return root;
    }
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* root = nullptr; 
        while (head != nullptr) {
            if (root == nullptr) {
                root = new ListNode(head->val);
            } else {
                root = insert(root , head);
            }
            head = head -> next;
        }
        return root; 
    }
};
