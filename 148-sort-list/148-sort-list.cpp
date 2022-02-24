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
    ListNode*fun(ListNode*heada,ListNode*headb){
        ListNode*d=new ListNode(0);
        ListNode*temp=d;
        while(heada and headb){
            if(heada->val<=headb->val){
                temp->next=heada;
                temp=temp->next;
                heada=heada->next;
            }else{
                temp->next=headb;
                temp=temp->next;
                headb=headb->next;
            }
        }
        while(heada){
            temp->next=heada;
                temp=temp->next;
                heada=heada->next;
        }
        while(headb){
            temp->next=headb;
                temp=temp->next;
                headb=headb->next;
        }
        temp->next=NULL;
        return d->next;
    }
    ListNode* sortList(ListNode* head) {
        if(!head or !head->next){
            return head;
        }
        auto s=head,f=head->next;
        while(f and f->next){
            s=s->next;
            f=f->next->next;
        }
        auto x=s->next;
        s->next=NULL;
        return fun(sortList(x),sortList(head));
        
    }
};