//brute force soltuion
// time:- O(n);
// space :- o(1);

class Solution {
public:
    ListNode*rev(ListNode*h){
        ListNode*curr=h,*nex=h,*prev=NULL;
        while(nex!=NULL){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=rev(l1);
        l2=rev(l2);
        int c=0;
        ListNode*dum=new ListNode(0);
        ListNode*temp=dum;
        // while(l1!=NULL){
        //     cout<<l1->val<<" ";
        //     l1=l1->next;
        // }
        while(l1!=NULL or l2!=NULL or c!=0){
            int k1=l1?l1->val:0;
            int k2=l2?l2->val:0;
            int val=k1+k2+c;
            temp->next=new ListNode(val%10);
            cout<<temp->val;
            c=val/10;
            l1=l1?l1->next:NULL;
            l2=l2?l2->next:NULL;
            temp=temp->next;
        }
        return rev(dum->next);
    }
};