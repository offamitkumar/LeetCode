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
    int power(int n , int i){
        int x = 1;
        for(int m=0;m<=i;++m){
            x*=2;
        }
        cout<<"power = "<<x<<endl;
        return x;
    }
    int getDecimalValue(ListNode* head) {
        ListNode *temp=head;
        int len =0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        int x=0;
        --len;
        while(head!=NULL){
            x+=power(2,--len)*head->val;
            head=head->next;
        }
        return x;
    }
};
