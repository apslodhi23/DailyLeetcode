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
        ListNode*s=head,*f=head;
        while(c<n and s!=NULL){
            s=s->next;
            c++;
        }
        if(s==NULL){
            return head->next;
        }
        while(s->next!=NULL){
            s=s->next;
            f=f->next;
        }
        f->next=f->next->next;
        return head;
    }
};