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
    ListNode* removeElements(ListNode* head, int val) {
        // ListNode*head;
        while(head!=NULL and head->val==val){
            head=head->next;
        }
        auto x=head;
        if(head==NULL or head->next==NULL){
            return head;
        }
        while(x!=NULL and x->next!=NULL){
            if(x->next->val==val){
                auto c=x->next;
                while(c!=NULL and c->val==val){
                    c=c->next;    
                }
                x->next=c;
            }
            x=x->next;
        }
        return head;
        
    }
};