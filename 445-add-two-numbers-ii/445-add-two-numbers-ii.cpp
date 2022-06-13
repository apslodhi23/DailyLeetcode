//optimsed soltuion
// time:- O(n);
// space :- o(1);

class Solution {
public:
    ListNode* fun(ListNode*l1,ListNode*l2,int &c){
        // cout<<1<<endl;
        if(l1==NULL and l2==NULL){
            return NULL;
        }
        ListNode* newnode= new ListNode(-1);
        newnode->next=fun(l1->next,l2->next,c);
        newnode->val=(l1->val+l2->val+c)%10;
        c=(l1->val+l2->val+c)/10;
        return newnode;
            
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*l=l1,*ll=l2;
        while(l!=NULL or ll!=NULL){
            if(l==NULL){
                ListNode*t=new ListNode(0);
                t->next=l1;
                l1=t;
                ll=ll->next;
            }else if(ll==NULL){
                ListNode* t= new ListNode(0);
                t->next=l2;
                l2=t;
                l=l->next;
            }else{
                l=l->next;
                ll=ll->next;
            }
            // cout<<1<<endl;
        }
        ListNode* dum= new ListNode(0);
        int c=0;
        dum->next=fun(l1,l2,c);
        if(c!=0){
            ListNode* t=new ListNode(c);
            t->next=dum->next;
            dum->next=t;
        }
        return dum->next;
        
    }
};