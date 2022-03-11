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
    ListNode* rotateRight(ListNode* head, int k) {
        int size=0;
        if(head==NULL){
            return head;
        }
        auto x=head;
        while(x!=NULL){
            x=x->next;
            size++;
        }
        k=k%size;
        if(k==0){
            return head;
        }
        int c=1;
        ListNode*newh,*cur=head,*te;
        auto hh=head;
        while(c<size-k){
            cur=cur->next;
            c++;
        }
        te=cur->next;
        cur->next=NULL;
        newh=te;
        while(te->next!=NULL){
            te=te->next;
        }
        te->next=hh;
        return newh;
        
    }
};