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
using Heap = set<pair<int , ListNode*>>;
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head = nullptr;
        ListNode* temp = head;
        Heap h;
        int k = lists.size();
        for(auto i=0;i<k;++i){
            ListNode*ptr = lists[i];
            if(ptr == nullptr){
                continue;
            }
            h.insert(make_pair(lists[i]->val , lists[i]));
        }
        while(not(h.empty())){
            if(temp == nullptr){
                temp = new ListNode((*h.begin()).first);
                if(head == nullptr){
                    head = temp;
                }
            }else{
                temp->next = new ListNode((*h.begin()).first);
                temp = temp->next;
            }
            ListNode*ptr = (*h.begin()).second;
            h.erase(h.begin());
            cout<<(*h.begin()).first<<endl;
            if(ptr->next != nullptr){
                ptr = ptr->next;
                h.insert(make_pair(ptr->val , ptr));
            }
            
        }
        return head;
    }
};
