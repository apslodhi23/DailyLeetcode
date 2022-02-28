class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        auto head1=new ListNode(0);
        auto head2=new ListNode(0);
        auto temp1=head1,temp2=head2;
        while(head!=NULL){
            if(head->val<x){
                temp1->next= new ListNode(head->val);
                temp1=temp1->next;
                head=head->next;
            }else{
                temp2->next= new ListNode(head->val);
                temp2=temp2->next;
                head=head->next;
            }
        }
        temp1->next=head2->next;
        return head1->next;
    }
};