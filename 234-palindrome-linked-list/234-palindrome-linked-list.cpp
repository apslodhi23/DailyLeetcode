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
    bool fun(ListNode*s,ListNode*head){
        ListNode*curr=s,*prev=NULL,*nextt=s;
        while(nextt!=NULL){
            nextt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextt;
        }
        while(prev->next!=NULL){
            if(head->val!=prev->val){
                return false;
            }
            head=head->next;
            prev=prev->next;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        ListNode*s=head,*f=head;
        while(f!=NULL and f->next!=NULL and f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        return fun(s,head);
    }
};