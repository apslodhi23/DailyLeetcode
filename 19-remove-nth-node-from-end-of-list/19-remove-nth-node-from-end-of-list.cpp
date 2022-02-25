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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        auto x=head,f=head;
        while(c<n and x!=NULL){
            x=x->next;
            c++;
        }
        if(x==NULL){
            return head->next;
        }
        while(x->next!=NULL){
            x=x->next;
            f=f->next;
        }
        f->next=f->next->next;
        return head;
    }
};