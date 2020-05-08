/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans=NULL;
        ListNode *end=NULL;
        int carry(0);
        while(l1!=NULL or l2!=NULL){
            int l1_val = (l1!=NULL)?l1->val:0;
            int l2_val = (l2!=NULL)?l2->val:0;
            int l_digit = (l1_val+l2_val+carry)%10;
            carry = (l1_val+l2_val+carry)/10;
            ListNode *temp = new ListNode(l_digit);
            if(ans==NULL){
                ans=temp;
                end=temp;
            }else{
                end->next = temp;
                end = temp;
            }
            if(l1!=NULL)l1=l1->next;
            if(l2!=NULL)l2=l2->next;
        }
        if(carry){
            ListNode *temp = new ListNode(carry);
            end->next = temp;
        }
        return ans;
    }
};
